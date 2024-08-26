#include "imageblur.h"
#include "ui_imageblur.h"
#include <QThread>
#include <QImage>
#include <QMessageBox>
#include <QtConcurrent/QtConcurrent>

ImageBlur::ImageBlur(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ImageBlur)

    //init
    , blurRange(0)
    , threadCount(0)

{
    ui->setupUi(this);
    // to view the picture in the lable
    QPixmap pix;
    ui->label->setPixmap(pix);

}

ImageBlur::~ImageBlur()
{
    delete ui;
}

void ImageBlur::on_pushButton_clicked()
{
    //open file
    QFileDialog dialog(this);
    dialog.setNameFilter(tr("Images(*.png *.xpm *.jpg)"));
    dialog.setViewMode(QFileDialog::Detail);

    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image File(*.png *.jpg *.bmp)"));
    if(!fileName.isEmpty()){
        QImage image(fileName);
        ui->txtPath->setText(fileName);
        // ui->label->setPixmap(QPixmap::fromImage(image));
        ui->label->setScaledContents(false);

        QSize labelSize = ui->label->size();

        QPixmap pixmap = QPixmap::fromImage(image).scaled(labelSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);

        ui->label->setPixmap(pixmap);
        this->resize(pixmap.size());

        //save picture
        originalImage = image;
    }
}

void ImageBlur::changeEvent(QEvent *e){
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

// int blurRange = 0;
// int threadCount = 0;


void ImageBlur::on_btnAdd_clicked()
{
    blurRange = ui->setTxtRange->text().toInt();
    blurRange += 1;
    ui->setTxtRange->setText(QString::number(blurRange));
}


void ImageBlur::on_btnSub_clicked()
{
    if(blurRange >0){
        blurRange -=1;
        ui->setTxtRange->setText(QString::number(blurRange));
    }
}


void ImageBlur::on_btnBlur_clicked()
{
    threadCount = ui->setTxtThread->text().toInt();
    if(threadCount <1){
        QMessageBox::warning(this, "Error","Thread count must be at least 1.");
        return;
    }

    QFutureWatcher<QImage> *watcher = new QFutureWatcher<QImage>(this);

    connect(watcher, &QFutureWatcher<QImage>::finished, this, [this, watcher]() {
        QImage blurredImage = watcher->result();
        QPixmap pixmap = QPixmap::fromImage(blurredImage).scaled(ui->label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->label->setPixmap(pixmap);
        watcher->deleteLater();
    });

    QFuture<QImage> future = QtConcurrent::run([this]() {
        return applyBlur(originalImage, blurRange, threadCount);
    });

    watcher->setFuture(future);
}

QImage ImageBlur::applyBlur(const QImage &image, int range, int threadCount)
{
    QImage blurredImage = image;
    int width = image.width();
    int height = image.height();

    auto blurFunction = [&](int startY, int endY) {
        for (int y = startY; y < endY; ++y) {
            for (int x = 0; x < width; ++x) {
                int redSum = 0, greenSum = 0, blueSum = 0, pcount = 0;

                for (int i = y - range; i <= y + range; ++i) {
                    for (int j = x - range; j <= x + range; ++j) {
                        if (i >= 0 && i < height && j >= 0 && j < width) {
                            QColor color = image.pixelColor(j, i);
                            redSum += color.red();
                            greenSum += color.green();
                            blueSum += color.blue();
                            pcount++;
                        }
                    }
                }

                if (pcount > 0) {
                    QColor avgColor(redSum / pcount, greenSum / pcount, blueSum / pcount);
                    blurredImage.setPixelColor(x, y, avgColor);
                }
            }
        }
    };

    QVector<QThread *> threads;
    int rowsPerThread = height / threadCount;
    for (int i = 0; i < threadCount; ++i) {
        int startY = i * rowsPerThread;
        int endY = (i == threadCount - 1) ? height : (i + 1) * rowsPerThread;

        QThread *thread = QThread::create(blurFunction, startY, endY);
        threads.append(thread);
        thread->start();
    }

    for (QThread *thread : threads) {
        thread->wait();
        delete thread;
    }

    return blurredImage;
}


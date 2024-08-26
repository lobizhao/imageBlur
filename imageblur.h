#ifndef IMAGEBLUR_H
#define IMAGEBLUR_H

#include <QMainWindow>
#include <QFileDialog>
#include <QImage>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class ImageBlur;
}
QT_END_NAMESPACE

class ImageBlur : public QMainWindow
{
    Q_OBJECT

public:
    ImageBlur(QWidget *parent = nullptr);
    ~ImageBlur();

protected:
    void changeEvent(QEvent *);

private slots:
    void on_pushButton_clicked();

    void on_btnAdd_clicked();

    void on_btnSub_clicked();

    void on_btnBlur_clicked();

private:
    Ui::ImageBlur *ui;

    QImage originalImage;
    int blurRange;
    int threadCount;

    QImage applyBlur(const QImage &QImage, int range, int threadCount);
};
#endif // IMAGEBLUR_H

/********************************************************************************
** Form generated from reading UI file 'imageblur.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEBLUR_H
#define UI_IMAGEBLUR_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageBlur
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txtPath;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *setRange;
    QLineEdit *setTxtRange;
    QPushButton *btnAdd;
    QPushButton *btnSub;
    QHBoxLayout *horizontalLayout_2;
    QLabel *setThread;
    QLineEdit *setTxtThread;
    QPushButton *btnBlur;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ImageBlur)
    {
        if (ImageBlur->objectName().isEmpty())
            ImageBlur->setObjectName("ImageBlur");
        ImageBlur->resize(1107, 1168);
        ImageBlur->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        centralwidget = new QWidget(ImageBlur);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(180, 0));
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setMargin(5);

        horizontalLayout->addWidget(label_2);

        txtPath = new QLineEdit(centralwidget);
        txtPath->setObjectName("txtPath");
        txtPath->setMinimumSize(QSize(10, 0));
        QFont font1;
        font1.setPointSize(10);
        txtPath->setFont(font1);
        txtPath->setMouseTracking(false);
        txtPath->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));

        horizontalLayout->addWidget(txtPath);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setMouseTracking(true);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"selection-color: rgb(0, 85, 255);\n"
"selection-background-color: rgb(0, 170, 255);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        setRange = new QLabel(centralwidget);
        setRange->setObjectName("setRange");
        setRange->setMinimumSize(QSize(180, 0));
        setRange->setFont(font);
        setRange->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(setRange);

        setTxtRange = new QLineEdit(centralwidget);
        setTxtRange->setObjectName("setTxtRange");
        setTxtRange->setFont(font1);
        setTxtRange->setMouseTracking(false);
        setTxtRange->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);\n"
"\n"
""));

        horizontalLayout_3->addWidget(setTxtRange);

        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setFont(font1);
        btnAdd->setMouseTracking(true);
        btnAdd->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout_3->addWidget(btnAdd);

        btnSub = new QPushButton(centralwidget);
        btnSub->setObjectName("btnSub");
        btnSub->setFont(font2);
        btnSub->setMouseTracking(true);
        btnSub->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(0, 0, 255);"));

        horizontalLayout_3->addWidget(btnSub);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        setThread = new QLabel(centralwidget);
        setThread->setObjectName("setThread");
        setThread->setMinimumSize(QSize(180, 0));
        setThread->setFont(font);
        setThread->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(setThread);

        setTxtThread = new QLineEdit(centralwidget);
        setTxtThread->setObjectName("setTxtThread");
        setTxtThread->setFont(font1);
        setTxtThread->setMouseTracking(false);
        setTxtThread->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));

        horizontalLayout_2->addWidget(setTxtThread);

        btnBlur = new QPushButton(centralwidget);
        btnBlur->setObjectName("btnBlur");
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        btnBlur->setFont(font3);
        btnBlur->setMouseTracking(true);
        btnBlur->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"selection-background-color: rgb(0, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(0, 170, 255);"));

        horizontalLayout_2->addWidget(btnBlur);

        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        verticalLayout->addWidget(label);

        ImageBlur->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ImageBlur);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1107, 25));
        ImageBlur->setMenuBar(menubar);
        statusbar = new QStatusBar(ImageBlur);
        statusbar->setObjectName("statusbar");
        ImageBlur->setStatusBar(statusbar);

        retranslateUi(ImageBlur);

        QMetaObject::connectSlotsByName(ImageBlur);
    } // setupUi

    void retranslateUi(QMainWindow *ImageBlur)
    {
        ImageBlur->setWindowTitle(QCoreApplication::translate("ImageBlur", "ImageBlur", nullptr));
        label_2->setText(QCoreApplication::translate("ImageBlur", "Image Path", nullptr));
        pushButton->setText(QCoreApplication::translate("ImageBlur", "Browse...", nullptr));
        setRange->setText(QCoreApplication::translate("ImageBlur", "Blur Range", nullptr));
        btnAdd->setText(QCoreApplication::translate("ImageBlur", "+", nullptr));
        btnSub->setText(QCoreApplication::translate("ImageBlur", "-", nullptr));
        setThread->setText(QCoreApplication::translate("ImageBlur", "Thread count", nullptr));
        btnBlur->setText(QCoreApplication::translate("ImageBlur", "Create", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImageBlur: public Ui_ImageBlur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEBLUR_H

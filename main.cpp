#include "imageblur.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageBlur w;
    w.show();
    return a.exec();
}

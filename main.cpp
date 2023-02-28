#include "mainwindow.h"
#include <QtWidgets/QApplication>
int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(mainwindowRes);
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowIcon(QIcon(":/img/images/icon.png"));
    w.show();
    return a.exec();
}
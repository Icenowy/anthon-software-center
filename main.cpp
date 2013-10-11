#include "softwarecenter.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SoftwareCenter w;
    w.show();
    
    return a.exec();
}

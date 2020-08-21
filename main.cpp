#include "visualtree.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    visualtree w;
    w.show();
    return a.exec();
}

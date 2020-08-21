#ifndef VISUALTREE_H
#define VISUALTREE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class visualtree; }
QT_END_NAMESPACE

class visualtree : public QMainWindow
{
    Q_OBJECT

public:
    visualtree(QWidget *parent = nullptr);
    ~visualtree();

private:
    Ui::visualtree *ui;
};
#endif // VISUALTREE_H

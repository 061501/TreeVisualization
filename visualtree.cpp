#include "visualtree.h"
#include "ui_visualtree.h"

visualtree::visualtree(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::visualtree)
{
    ui->setupUi(this);
}

visualtree::~visualtree()
{
    delete ui;
}


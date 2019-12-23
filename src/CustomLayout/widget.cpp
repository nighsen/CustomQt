#include "widget.h"
#include "ui_widget.h"

#include "FlowLayout/flowlayoutwidget.h"
#include "BorderLayout/borderlayoutwidget.h"
#include "CardLayout/cardlayoutwidget.h"
#include "PyramidLayout/pyramidlayoutwidget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle(tr("Custom Layout"));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_flowLayoutButton_clicked()
{
    FlowLayoutWidget *p = new FlowLayoutWidget;
    p->show();
}

void Widget::on_borderLayoutButton_clicked()
{
    BorderLayoutWidget *p = new BorderLayoutWidget;
    p->show();
}

void Widget::on_cardLayoutButton_clicked()
{
    CardLayoutWidget *p = new CardLayoutWidget;
    p->show();
}

void Widget::on_pyramidLayoutButton_clicked()
{
    PyramidLayoutWidget *p = new PyramidLayoutWidget;
    p->show();
}

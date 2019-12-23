#ifndef CARDLAYOUT_H
#define CARDLAYOUT_H
#include <QtWidgets>
#include <QLayout>
#include <QList>

/*
 * From: https://doc.qt.io/qt-5/layout.html
*/
class CardLayout : public QLayout
{
public:
    CardLayout(QWidget *parent): QLayout(parent) {}
    ~CardLayout() override;

    void addItem(QLayoutItem *item) override;
    QSize sizeHint() const override;
    QSize minimumSize() const override;
    int count() const override;
    QLayoutItem *itemAt(int) const override;
    QLayoutItem *takeAt(int) override;
    void setGeometry(const QRect &rect) override;

private:
    QList<QLayoutItem*> list;
};
#endif // CARDLAYOUT_H

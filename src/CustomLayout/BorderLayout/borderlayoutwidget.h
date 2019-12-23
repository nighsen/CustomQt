#ifndef BORDERLAYOUTWIDGET_H
#define BORDERLAYOUTWIDGET_H

#include <QWidget>
#include <QLabel>

class BorderLayoutWidget : public QWidget
{
    Q_OBJECT
public:
    explicit BorderLayoutWidget(QWidget *parent = nullptr);

signals:

public slots:

private:
    QLabel *createLabel(const QString &text);
};

#endif // BORDERLAYOUTWIDGET_H

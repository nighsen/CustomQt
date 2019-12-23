#include "cardlayout.h"
#include "cardlayoutwidget.h"

CardLayoutWidget::CardLayoutWidget(QWidget *parent) : QWidget(parent)
{
    setAttribute(Qt::WA_DeleteOnClose);

    CardLayout *layout = new CardLayout(this);

    layout->addWidget(new QPushButton(tr("Short")));
    layout->addWidget(new QPushButton(tr("Longer")));
    layout->addWidget(new QPushButton(tr("Different text")));
    layout->addWidget(new QPushButton(tr("More text")));
    layout->addWidget(new QPushButton(tr("Even longer button text")));
    setLayout(layout);

    setWindowTitle(tr("Card Layout"));
}

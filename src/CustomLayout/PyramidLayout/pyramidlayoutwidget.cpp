#include <QLabel>
#include "pyramidlayoutwidget.h"
#include "pyramidlayout.h"

PyramidLayoutWidget::PyramidLayoutWidget(QWidget *parent) : QWidget(parent)
{
    setAttribute(Qt::WA_DeleteOnClose);

    PyramidLayout* layout = new PyramidLayout(this, 0, 0, 0);
    for (int i = 0; i < 15; ++i)
    {
        layout->addWidget(new QLabel(tr("       ")));
    }

    setStyleSheet("QLabel{background-color:#ffc000;border:2px solid #ff3000}");

    setWindowTitle(tr("Pyramid Layout"));
}

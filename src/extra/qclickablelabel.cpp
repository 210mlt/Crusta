#include "qclickablelabel.h"

QClickableLabel::QClickableLabel(QWidget *parent)
    : QLabel(parent)
{
}

void QClickableLabel::mouseReleaseEvent(QMouseEvent *event)
{
    QLabel::mouseReleaseEvent(event);

    emit clicked();
}

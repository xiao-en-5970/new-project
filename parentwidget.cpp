#include "parentwidget.h"

ParentWidget::ParentWidget(QWidget *parent)
    : QWidget{parent}
{
    //调整无边框和透明以及始终前置
    this->setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    this->setWindowFlags(this->windowFlags() | Qt::WindowStaysOnBottomHint);
    setAutoFillBackground(true);
    setAttribute(Qt::WA_TranslucentBackground, true);
}

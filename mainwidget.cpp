#include "mainwidget.h"
#include "ui_mainwidget.h"


MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    init_var();
    init_widget();
}

void MainWidget::init_var()
{
    this->setting = new Setting;
}

void MainWidget::init_widget()
{

    this->resize(setting->mainwidget_width,setting->mainwidget_height);
    this->setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    this->setWindowFlags(this->windowFlags() | Qt::WindowStaysOnTopHint);
}
void MainWidget::del_var()
{
    if (this->setting!=nullptr)
    {
        delete this->setting;
        this->setting = nullptr;
    }
}
MainWidget::~MainWidget()
{
    del_var();
    delete ui;
}
// 鼠标相对于窗体的位置 event->globalPos() - this->pos()
void MainWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        m_bPressed = true;
        m_point = event->pos();
    }
}

// 若鼠标左键被按下，移动窗体位置
void MainWidget::mouseMoveEvent(QMouseEvent *event)
{
    if (m_bPressed)
        move(event->pos() - m_point + pos());
}

// 设置鼠标未被按下
void MainWidget::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);

    m_bPressed = false;
}


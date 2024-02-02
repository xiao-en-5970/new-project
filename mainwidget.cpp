#include "mainwidget.h"
#include "ui_mainwidget.h"


MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    init_var();
    init_widget();
    init_label();
    init_sti();
}

void MainWidget::init_var()
{
    this->setting = new Setting;
    this->logo_icon = QIcon(QPixmap(this->setting->logo));
}

void MainWidget::init_widget()
{
    //调整宽高
    this->resize(setting->mainwidget_width,setting->mainwidget_height);
    //调整无边框和透明以及始终前置
    this->setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    this->setWindowFlags(this->windowFlags() | Qt::WindowStaysOnTopHint);
    setAutoFillBackground(true);
    setAttribute(Qt::WA_TranslucentBackground, true);
    //设置logo
    this->setWindowIcon(this->logo_icon);
}
void MainWidget::del_var()
{
    if (this->setting!=nullptr)
    {
        delete this->setting;
        this->setting = nullptr;
    }
    if (this->cur_label!=nullptr)
    {
        delete this->cur_label;
        this->cur_label = nullptr;
    }
    if (this->sti != nullptr)
    {
        delete this->sti;
        this->sti = nullptr;
    }
}
MainWidget::~MainWidget()
{
    del_var();
    delete ui;
}

void MainWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        m_bPressed = true;
        m_point = event->pos();
    }
}

void MainWidget::init_sti()
{
    this->sti = new SystemTray(this->logo_icon,this->setting->sti_title,this->setting->sti_text,this);

}

void MainWidget::mouseMoveEvent(QMouseEvent *event)
{
    if (m_bPressed)
    {
        move(event->pos() - m_point + pos()+QPoint(-70,60));
        this->set_pix(QString(":/image/lifted/lifted0.png"));//临时
    }

}

void MainWidget::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_bPressed = false;
    this->set_pix(QString(":/image/stand/stand0.png"));//临时
}

void MainWidget::init_label()
{
    this->cur_label = new QLabel;
    this->cur_label->setParent(this);
    this->cur_label->move(this->pos());
    this->cur_label->resize(this->size());
    this->set_pix(QString(":/image/stand/stand0.png"));//临时
}

void MainWidget::set_pix(QString adr)
{
    this->cur_pix.load(adr);
    this->cur_pix = this->cur_pix.scaled(this->size(),Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    this->cur_label->setPixmap(this->cur_pix);
}

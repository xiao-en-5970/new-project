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


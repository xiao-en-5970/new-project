#include "mainwidget.h"
#include "ui_mainwidget.h"


MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    init_main();
}

void MainWidget::init_main()
{
    this->resize(mainwidget_width,mainwidget_height);
}

MainWidget::~MainWidget()
{
    delete ui;
}


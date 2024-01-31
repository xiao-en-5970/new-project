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
}

MainWidget::~MainWidget()
{
    delete ui;
}


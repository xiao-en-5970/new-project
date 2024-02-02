#include "systemtray.h"

SystemTray::SystemTray(QWidget *parent)
    : QWidget{parent}
{

}

SystemTray::SystemTray(QIcon icon,QString title,QString text,QWidget *parent)
{
    //添加新菜单
    this->menu = new QMenu(this);
    this->sti = new QSystemTrayIcon;
    this->sti->setIcon(icon);
    this->sti->show();
    this->sti->showMessage(title,text,QSystemTrayIcon::Information,3000);
    init_SystemTray();
    connect(this->sti,&QSystemTrayIcon::activated, this, &SystemTray::activeTray);
    connect(&this->quit_app,&QAction::triggered,this,[this](){
        emit QUIT();
    });
}

void SystemTray::addmyaction(QAction *act,QString title)
{
    act->setText(title);
    this->menu->addAction(act);
}

void SystemTray::showMenu()
{
    this->menu->move(QCursor::pos()+QPoint(0,-50));
    this->menu->show();
}

void SystemTray::activeTray(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason)
    {
    case QSystemTrayIcon::Context:
        showMenu();
        break;
    case QSystemTrayIcon::DoubleClick:
//        showUI();
        break;
    case QSystemTrayIcon::Unknown:
    case QSystemTrayIcon::Trigger:
    case QSystemTrayIcon::MiddleClick:
        break;
    }
}

void SystemTray::init_SystemTray()
{
    this->addmyaction(&this->open_ui,QString("UI面板"));
    this->addmyaction(&this->quit_app,QString("退出桌宠"));
}

SystemTray::~SystemTray()
{
    if (this->sti!=nullptr)
    {
        delete this->sti;
        this->sti = nullptr;
    }
    if (this->menu!=nullptr)
    {
        delete this->menu;
        this->menu = nullptr;
    }
}

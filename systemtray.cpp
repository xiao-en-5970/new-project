#include "systemtray.h"

SystemTray::SystemTray(QObject *parent)
    : QSystemTrayIcon{parent}
{

}

SystemTray::SystemTray(QIcon icon,QString title,QString text,QObject *parent)
{
    this->setIcon(icon);
    this->show();
    this->showMessage(title,text,QSystemTrayIcon::Information,3000);
}

#ifndef SYSTEMTRAY_H
#define SYSTEMTRAY_H

#include <QObject>
#include <QSystemTrayIcon>

class SystemTray : public QSystemTrayIcon
{
    Q_OBJECT
public:
    explicit SystemTray(QObject *parent = nullptr);
    //重写构造函数传入一堆参数
    SystemTray(QIcon s,QString title,QString text,QObject *parent = nullptr);

signals:

};

#endif // SYSTEMTRAY_H

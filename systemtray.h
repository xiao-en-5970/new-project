#ifndef SYSTEMTRAY_H
#define SYSTEMTRAY_H

#include <QWidget>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QAction>
#include <QCursor>
class SystemTray : public QWidget
{
    Q_OBJECT
public:
    explicit SystemTray(QWidget *parent = nullptr);
    SystemTray(QIcon icon,QString title,QString text,QWidget *parent);
    QMenu *menu = nullptr;
    QAction open_ui;
    QAction quit_app;
    QSystemTrayIcon * sti = nullptr;

    void addmyaction(QAction *act,QString title);
    void activeTray(QSystemTrayIcon::ActivationReason reason);
    void init_SystemTray();
    void showMenu();
    ~SystemTray();
signals:
    void QUIT();

};

#endif // SYSTEMTRAY_H

#ifndef SETTING_H
#define SETTING_H

#include <QObject>

class Setting : public QObject
{
    Q_OBJECT
public:
    explicit Setting(QObject *parent = nullptr);
    int mainwidget_width = 200;
    int mainwidget_height = 300;
signals:

};

#endif // SETTING_H

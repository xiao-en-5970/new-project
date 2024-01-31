#ifndef SETTING_H
#define SETTING_H

#include <QObject>

class Setting : public QObject
{
    Q_OBJECT
public:
    explicit Setting(QObject *parent = nullptr);
    //桌宠宽
    int mainwidget_width = 200;
    //桌宠高
    int mainwidget_height = 300;
    //动作数量上限
    int img_num_max = 20;
signals:

};

#endif // SETTING_H

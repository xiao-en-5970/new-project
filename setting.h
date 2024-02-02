#ifndef SETTING_H
#define SETTING_H

#include <QObject>

class Setting : public QObject
{
    Q_OBJECT
public:
    explicit Setting(QObject *parent = nullptr);
    //桌宠宽
    int mainwidget_width = 300;
    //桌宠高
    int mainwidget_height = 300;
    //动作数量上限
    int img_num_max = 20;
    //logo路径
    QString logo = QString(":/image/logo/logo1.png");
    //托盘图标的title
    QString sti_title = QString("标题");
    //托盘图标的text
    QString sti_text = QString("文字");
signals:

};

#endif // SETTING_H

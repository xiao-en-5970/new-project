#ifndef ACTION_H
#define ACTION_H

#include <QObject>
#include <QVector>
#include <QPixmap>

class Action : public QObject
{
    Q_OBJECT
public:
    explicit Action(QObject *parent = nullptr);
    //重写构造函数(数量,地址数组）
    Action(int num,QString *addresses);
    //播放动作
    void playing();
    //图片序列
    QPixmap *pics = nullptr;

signals:

};

#endif // ACTION_H

#include "action.h"

Action::Action(QObject *parent)
    : QObject{parent}
{

}
Action::Action(int num,QString *addresses)
{
    //创建一个num数量的图片序列
    this->pics = new QPixmap[num];
    //循环遍历每个序列，使其导入pics序列
    for (int i = 0;i<num;i++)
    {
        this->pics[i] = QPixmap(addresses[i]);
    }
}

void Action::playing()
{
    //播放动作序列
}

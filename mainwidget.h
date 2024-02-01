#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "setting.h"
#include <QLabel>
#include <QMouseEvent>
#include <QPalette>
#include <QColor>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWidget; }
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
//私有函数
    //初始化main窗口的参数
    void init_widget();
    //初始化一些变量
    void init_var();
    //初始化标签
    void init_label();
    //删除所有new的变量，保持好习惯
    void del_var();
    //重写鼠标按下事件
    void mousePressEvent(QMouseEvent *event);
    //重写鼠标移动事件
    void mouseMoveEvent(QMouseEvent *event);
    //重写鼠标释放事件
    void mouseReleaseEvent(QMouseEvent *event);
    //设置图片
    void set_pix(QString);
//私有变量
    //setting属性
    Setting * setting = nullptr;
    //显示当前图片
    QLabel * cur_label = nullptr;
    //记录鼠标是否被按下
    bool m_bPressed = false;
    //记录鼠标位置
    QPoint m_point;
    //pix图片属性
    QPixmap cur_pix;
    //UI
    Ui::MainWidget *ui;
};
#endif // MAINWIDGET_H

#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "setting.h"
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
    //删除所有new的变量
    void del_var();
//私有变量
    //setting属性
    Setting * setting = nullptr;
    Ui::MainWidget *ui;
};
#endif // MAINWIDGET_H

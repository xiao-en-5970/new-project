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
    void init_main();
    Ui::MainWidget *ui;
};
#endif // MAINWIDGET_H

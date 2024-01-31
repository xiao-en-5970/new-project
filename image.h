#ifndef IMAGE_H
#define IMAGE_H

#include <QObject>
#include <QPixmap>
#include "setting.h"
class Image : public QObject
{
    Q_OBJECT
public:
    explicit Image(QObject *parent = nullptr);
    Image(int num,QString address);
    QPixmap[20];

signals:

};

#endif // IMAGE_H

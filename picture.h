#ifndef PICTURE_H
#define PICTURE_H

#include <QMainWindow>
#include <QImage>

class Picture
{
public:
    Picture();
    ~Picture();
    int getHeight() const;
    void setHeight(int value);

    int getWidth() const;
    void setWidth(int value);

    int getPosX() const;
    void setPosX(int value);

    int getPosY() const;
    void setPosY(int value);

    double getRotateAng() const;
    void setRotateAng(double value);

    int getIsFixed() const;
    void setIsFixed(int value);

    QString getPath() const;
    void setPath(const QString &value);

    QString getName() const;
    void setName(const QString &value);

    QImage getImage() const;
    void setImage(const QImage &value);

private:
    int height;
    int width;
    int posX;//中心位置的横坐标
    int posY;//中心位置的纵坐标
    double rotateAng;//旋转角度

    int isFixed;//是否固定
    QString path;//图片保存路径
    QString name;//图面名称
    QImage image;//图片的内容
};

#endif // PICTURE_H

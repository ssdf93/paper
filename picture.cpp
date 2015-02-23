#include "picture.h"

Picture::Picture()
{

}

Picture::~Picture()
{

}
int Picture::getHeight() const
{
    return height;
}

void Picture::setHeight(int value)
{
    height = value;
}
int Picture::getWidth() const
{
    return width;
}

void Picture::setWidth(int value)
{
    width = value;
}
int Picture::getPosX() const
{
    return posX;
}

void Picture::setPosX(int value)
{
    posX = value;
}
int Picture::getPosY() const
{
    return posY;
}

void Picture::setPosY(int value)
{
    posY = value;
}
double Picture::getRotateAng() const
{
    return rotateAng;
}

void Picture::setRotateAng(double value)
{
    rotateAng = value;
}
int Picture::getIsFixed() const
{
    return isFixed;
}

void Picture::setIsFixed(int value)
{
    isFixed = value;
}
QString Picture::getPath() const
{
    return path;
}

void Picture::setPath(const QString &value)
{
    path = value;
}
QString Picture::getName() const
{
    return name;
}

void Picture::setName(const QString &value)
{
    name = value;
}
QImage Picture::getImage() const
{
    return image;
}

void Picture::setImage(const QImage &value)
{
    image = value;
}











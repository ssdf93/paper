#include "project.h"
#include <QDebug>

class ProjectData : public QSharedData
{
public:

};

Project::Project() : data(new ProjectData)
{
    qDebug() << "It's a new project!";
}

Project::Project(const Project &rhs) : data(rhs.data)
{

}

Project &Project::operator=(const Project &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

Project::~Project()
{

}
QString Project::getName() const
{
    return name;
}

void Project::setName(const QString &value)
{
    name = value;
}
QString Project::getPath() const
{
    return path;
}

void Project::setPath(const QString &value)
{
    path = value;
}
QDateTime Project::getCreatedTime() const
{
    return createdTime;
}

void Project::setCreatedTime(const QDateTime &value)
{
    createdTime = value;
}
double Project::getLength() const
{
    return length;
}

void Project::setLength(double value)
{
    length = value;
}
double Project::getWidth() const
{
    return width;
}

void Project::setWidth(double value)
{
    width = value;
}
int Project::getIsSaved() const
{
    return isSaved;
}

void Project::setIsSaved(int value)
{
    isSaved = value;
}
QVector<Picture> Project::getVec() const
{
    return vec;
}

void Project::setVec(const QVector<Picture> &value)
{
    vec = value;
}









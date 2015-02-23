#ifndef PROJECT_H
#define PROJECT_H

#include <QMainWindow>
#include <QSharedDataPointer>
#include <QDateTime>
#include <picture.h>

class ProjectData;

class Project
{
    //定义工程文件，工程信息等等，保存图片信息等
public:
    Project();
    Project(const Project &);
    Project &operator=(const Project &);
    ~Project();

    QString getName() const;
    void setName(const QString &value);

    QString getPath() const;
    void setPath(const QString &value);

    QDateTime getCreatedTime() const;
    void setCreatedTime(const QDateTime &value);

    double getLength() const;
    void setLength(double value);

    double getWidth() const;
    void setWidth(double value);

    int getIsSaved() const;
    void setIsSaved(int value);

    QVector<Picture> getVec() const;
    void setVec(const QVector<Picture> &value);

private:
    QSharedDataPointer<ProjectData> data;
    QString name;
    QString path;
    QDateTime createdTime;
    double length;
    double width;
    int isSaved;
    //保存图片信息
    QVector<Picture> vec;
};

#endif // PROJECT_H

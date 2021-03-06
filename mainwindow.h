#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <project.h>
#include <QMessageBox>
#include <QDebug>
#include <QFileDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Project *project;
    int checkSaved();

private slots:
    void on_actionNew_triggered();

    void on_actionLoad_Project_triggered();

    void on_actionSave_triggered();

    void on_actionImport_triggered();

    void on_actionClose_triggered();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

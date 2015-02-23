#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    project=NULL;
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::checkSaved()
{
    //判断是否保存，并保存

}

void MainWindow::on_actionNew_triggered()
{
    //判断当前工程是否保存
    if(project!=NULL&&project->getIsSaved()==0)
    {
        //没有保存
        QMessageBox msgBox;
        msgBox.setText("The project has not been saved.");
        msgBox.setInformativeText("Do you want to save your changes?");
        msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Save);
        int ret = msgBox.exec();
        if(ret==QMessageBox::Save){
            on_actionSave_triggered();
        }
        else if(ret==QMessageBox::Cancel){
            return;
        }
    }

    //创建新的工程，刷新所有界面，重置所有参数
    if(project!=NULL)
        delete project;

    project=new Project;



}

void MainWindow::on_actionLoad_Project_triggered()
{
    //弹出对话框，打开工程文件，我们把工程文件后缀定成(.paproj)
    QString file_name = QFileDialog::getOpenFileName(this,tr("Open Paper Project"), "",tr("PaperProject(*.paproj"), 0);

}

void MainWindow::on_actionSave_triggered()
{
     //弹出对话框，确定文件夹，保存工程

}

void MainWindow::on_actionImport_triggered()
{

    //弹出文件管理器，多选图片
    QStringList picture_files = QFileDialog::getOpenFileNames(
                             this,
                             "Select one or more picture files to open",
                             "",
                             "Images (*.png *.xpm *.jpg)");

}

void MainWindow::on_actionClose_triggered()
{
    //关闭工程，删除内存

}

void MainWindow::on_actionExit_triggered()
{
    //退出软件

}

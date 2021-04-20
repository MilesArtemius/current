#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_up_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0.0;
    ui->openGLWidget->translateY = 0.0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 10;
    ui->openGLWidget->rotatedX = 1;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 0;
    if(ui->openGLWidget->angleX==360){
        ui->openGLWidget->angleX = 0;
    }
    ui->openGLWidget->update();
}

void MainWindow::on_right_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0.0;
    ui->openGLWidget->translateY = 0.0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 10;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 1;
    ui->openGLWidget->rotatedZ = 0;
    if(ui->openGLWidget->angleY==360){
        ui->openGLWidget->angleY = 0;
    }
    ui->openGLWidget->update();
}

void MainWindow::on_left_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0.0;
    ui->openGLWidget->translateY = 0.0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = -10;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 1;
    ui->openGLWidget->rotatedZ = 0;
    if(ui->openGLWidget->angleY==360){
        ui->openGLWidget->angleY = 0;
    }
    ui->openGLWidget->update();
}

void MainWindow::on_leftZ_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0.0;
    ui->openGLWidget->translateY = 0.0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = -10;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 1;
    if(ui->openGLWidget->angleZ==360){
        ui->openGLWidget->angleZ = 0;
    }
    ui->openGLWidget->update();
}

void MainWindow::on_rightZ_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0.0;
    ui->openGLWidget->translateY = 0.0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 10;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 1;
    if(ui->openGLWidget->angleZ==360){
        ui->openGLWidget->angleZ = 0;
    }
    ui->openGLWidget->update();
}

void MainWindow::on_down_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0.0;
    ui->openGLWidget->translateY = 0.0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = -10;
    ui->openGLWidget->rotatedX = 1;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 0;
    if(ui->openGLWidget->angleX==360){
        ui->openGLWidget->angleX = 0;
    }
    ui->openGLWidget->update();
}


void MainWindow::on_scaleX_clicked()
{
    ui->openGLWidget->scaleX = 1.2;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0.0;
    ui->openGLWidget->translateY = 0.0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 0;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 0;
    ui->openGLWidget->update();
}

void MainWindow::on_scale_X_clicked()
{
    ui->openGLWidget->scaleX = 0.8;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0.0;
    ui->openGLWidget->translateY = 0.0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 0;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 0;
    ui->openGLWidget->update();
}

void MainWindow::on_scaleY_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1.2;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0.0;
    ui->openGLWidget->translateY = 0.0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 0;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 0;
    ui->openGLWidget->update();
}

void MainWindow::on_scale_Y_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 0.8;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0.0;
    ui->openGLWidget->translateY = 0.0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 0;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 0;
    ui->openGLWidget->update();
}

void MainWindow::on_scaleZ_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1.2;
    ui->openGLWidget->translateX = 0.0;
    ui->openGLWidget->translateY = 0.0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 0;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 0;
    ui->openGLWidget->update();
}

void MainWindow::on_scale_Z_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 0.8;
    ui->openGLWidget->translateX = 0.0;
    ui->openGLWidget->translateY = 0.0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 0;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 0;
    ui->openGLWidget->update();
}

void MainWindow::on_translateUp_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0;
    ui->openGLWidget->translateY = -0.5;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 0;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 0;
    ui->openGLWidget->update();
}

void MainWindow::on_translateLeft_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = -0.5;
    ui->openGLWidget->translateY = 0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 0;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 0;
    ui->openGLWidget->update();
}

void MainWindow::on_translateRight_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0.5;
    ui->openGLWidget->translateY = 0;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 0;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 0;
    ui->openGLWidget->update();
}

void MainWindow::on_translateDown_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0;
    ui->openGLWidget->translateY = 0.5;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 0;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 0;
    ui->openGLWidget->update();
}

void MainWindow::on_translateUp_2_clicked()
{
    ui->openGLWidget->scaleX = 1;
    ui->openGLWidget->scaleY = 1;
    ui->openGLWidget->scaleZ = 1;
    ui->openGLWidget->translateX = 0;
    ui->openGLWidget->translateY = -0.5;
    ui->openGLWidget->translateZ = 0.0;
    ui->openGLWidget->angleX = 0;
    ui->openGLWidget->rotatedX = 0;
    ui->openGLWidget->rotatedY = 0;
    ui->openGLWidget->rotatedZ = 0;
    ui->openGLWidget->update();
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    ui->openGLWidget->ortog = arg1;
    ui->openGLWidget->update();
}

void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    ui->openGLWidget->persp = arg1;
    ui->openGLWidget->update();
}

void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    ui->openGLWidget->visible = arg1;
    ui->openGLWidget->update();
}

void MainWindow::on_fineness_actionTriggered(int action)
{
    ui->openGLWidget->fineness = action;
    ui->openGLWidget->update();
}

void MainWindow::on_intensity_actionTriggered(int action)
{
    ui->openGLWidget->intensity = action;
    ui->openGLWidget->update();
}

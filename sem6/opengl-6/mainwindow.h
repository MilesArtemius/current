#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "oglwidget.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_up_clicked();

    void on_left_clicked();

    void on_rightZ_clicked();

    void on_leftZ_clicked();

    void on_right_clicked();

    void on_down_clicked();

    void on_scaleX_clicked();

    void on_scale_X_clicked();

    void on_scaleY_clicked();

    void on_scale_Y_clicked();

    void on_scaleZ_clicked();

    void on_scale_Z_clicked();

    void on_translateUp_clicked();

    void on_translateLeft_clicked();

    void on_translateRight_clicked();

    void on_translateDown_clicked();

    void on_translateUp_2_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_fineness_actionTriggered(int action);

    void on_intensity_actionTriggered(int action);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

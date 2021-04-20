#ifndef OGLWIDGET_H
#define OGLWIDGET_H

#include <QWidget>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QTimerEvent>
#include <QBasicTimer>
#include <cmath>

class OGLWidget : public QOpenGLWidget, protected QOpenGLFunctions {
public:
    OGLWidget(QWidget *parent = 0);
    ~OGLWidget();
    double angleX = 80;
    double angleY = 0;
    double angleZ = 0;
    bool rotatedX = 1;
    bool rotatedY = 1;
    bool rotatedZ = 1;
    double scaleX = 0.5;
    double scaleY = 0.5;
    double scaleZ = 0.5;
    double translateX = 0;
    double translateY = -0.25;
    double translateZ = 0;
    bool ortog = 0;
    bool persp = 0;
    bool visible = 0;
    int fineness = 1;
    double intensity = 1;

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

private:
    GLdouble verts[16][18][3] = {};

    void vert();
    void plot();
};

#endif // OGLWIDGET_H

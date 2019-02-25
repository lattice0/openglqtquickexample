#ifndef OpenGlVideoQtQuick_H
#define OpenGlVideoQtQuick_H

#include <QtQuick/QQuickItem>
#include <QtGui/QOpenGLShaderProgram>
#include <QtGui/QOpenGLFunctions>
#include <QtQuick/qquickwindow.h>
#include <QtGui/QOpenGLShaderProgram>
#include <QtGui/QOpenGLContext>
#include <QString>
#include <iostream>
#include <QTimer>



class OpenGlVideoQtQuickRenderer : public QObject, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    OpenGlVideoQtQuickRenderer() {        
    }
    ~OpenGlVideoQtQuickRenderer();


public slots:
    void render();

private:
    QOpenGLShaderProgram* program;
    GLuint unis[3] = {0};
    GLuint texs[3] = { 0 };
    unsigned char *datas[3] = { 0 };
    bool firstRun = true;
    //TODO: make this variable according to video data
    int width = 1920;
    int height = 1080;
};

class OpenGlVideoQtQuick : public QQuickItem
{
    Q_OBJECT

public:
    OpenGlVideoQtQuick();

private slots:
    void handleWindowChanged(QQuickWindow *win);
public slots:
    void sync();
    void update();//Updates the window

private:
    OpenGlVideoQtQuickRenderer *openGlVideoQtQuickRenderer;

};

#endif // OpenGlVideoQtQuick_H

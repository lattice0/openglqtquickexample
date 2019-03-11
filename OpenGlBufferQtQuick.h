#ifndef OpenGlBufferItem_H
#define OpenGlBufferItem_H
#include <QObject>
#include <QQuickFramebufferObject>
#include <QOpenGLFunctions>
#include <QOpenGLTexture>
#include <QOpenGLShaderProgram>
#include <QQuickWindow>
#include <QThreadPool>
#include <QRunnable>
#include <QMutex>
#include <QNetworkAccessManager>
#include <functional>
#include <boost/thread.hpp>
//#include "reactitem.h"

class OpenGlBufferItemRenderer: public QQuickFramebufferObject::Renderer, public QOpenGLFunctions
{
public:
    OpenGlBufferItemRenderer(int a) {
        this->a = a;
    }
    void render() override;
    QOpenGLFramebufferObject* createFramebufferObject(const QSize &size) override;
    void synchronize(QQuickFramebufferObject *item);
    int a;
private:
    QOpenGLShaderProgram* program;
    QQuickWindow *m_window;
    GLuint unis[3] = {0};
    GLuint texs[3] = { 0 };
    bool firstRender = true;
    const char *tString3;
};

class OpenGlBufferItem: public QQuickFramebufferObject//, public ReactItem
{
    Q_OBJECT
    Q_PROPERTY(qreal a WRITE setA)

public:
    OpenGlBufferItem();

    Renderer *createRenderer() const;
    int a;
    void setA(int a) {
        this->a = a;
    }
private:
    bool firstRender = true;
};
#endif

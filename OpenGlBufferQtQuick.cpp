#include "OpenGlBufferQtQuick.h"
#include <QOpenGLFramebufferObjectFormat>
#include <QRunnable>
#include <QEventLoop>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QMutexLocker>
#include <memory>
#include <iostream>

#define GET_STR(x) #x
#define A_VER 3
#define T_VER 4

static const GLfloat ver[] = {
    -1.0f,-1.0f,
     1.0f,-1.0f,
    -1.0f, 1.0f,
     1.0f, 1.0f
};

static const GLfloat tex[] = {
    0.0f, 1.0f,
    1.0f, 1.0f,
    0.0f, 0.0f,
    1.0f, 0.0f
};

const char *vString3 = GET_STR(
    attribute vec4 vertexIn;
    attribute vec2 textureIn;
    varying vec2 textureOut;
    void main(void)
    {
        gl_Position = vertexIn;
        textureOut = textureIn;
    }
);


void OpenGlBufferItemRenderer::render() {
    QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();
    int frameWidth = 1920;
    int frameHeight = 1080;
    if (this->firstRender) {
        std::cout << "Creating QOpenGLShaderProgram " << std::endl;
        program = new QOpenGLShaderProgram();
        f->initializeOpenGLFunctions();

        if (a==1) {
            tString3 = "\
            varying vec2 textureOut;\
            void main(void)\
            {\
                gl_FragColor = vec4(0.0, 0.5, -1, 1.0);\
            }";
        } else if (a==2) {
            tString3 = "\
            varying vec2 textureOut;\
            void main(void)\
            {\
                gl_FragColor = vec4(0.0, 0.5, 0.5, 1.0);\
            }";
        } else if (a==3) {
            tString3 = "\
            varying vec2 textureOut;\
            void main(void)\
            {\
                gl_FragColor = vec4(0.0, 0.5, 1, 1.0);\
            }";
        }
        
        std::cout << "Fragment Shader compilation: " << program->addShaderFromSourceCode(QOpenGLShader::Fragment, tString3) << std::endl;
        std::cout << "Vertex Shader compilation: "   << program->addShaderFromSourceCode(QOpenGLShader::Vertex, vString3) << std::endl;

        program->bindAttributeLocation("vertexIn",A_VER);
        program->bindAttributeLocation("textureIn",T_VER);
        std::cout << "program->link() = " << program->link() << std::endl;
        this->firstRender = false;
    }
    
    program->bind();

    f->glVertexAttribPointer(A_VER, 2, GL_FLOAT, 0, 0, ver);
    f->glEnableVertexAttribArray(A_VER);

    f->glVertexAttribPointer(T_VER, 2, GL_FLOAT, 0, 0, tex);
    f->glEnableVertexAttribArray(T_VER);
  
    //Y
    f->glBindTexture(GL_TEXTURE_2D, texs[0]);
    f->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    f->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    f->glTexImage2D(GL_TEXTURE_2D, 0, GL_RED, frameWidth, frameHeight, 0, GL_RED, GL_UNSIGNED_BYTE, 0);

    //U
    f->glBindTexture(GL_TEXTURE_2D, texs[1]);
    f->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    f->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    f->glTexImage2D(GL_TEXTURE_2D, 0, GL_RED, frameWidth/2, frameHeight / 2, 0, GL_RED, GL_UNSIGNED_BYTE, 0);

    //V
    f->glBindTexture(GL_TEXTURE_2D, texs[2]);
    f->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    f->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    f->glTexImage2D(GL_TEXTURE_2D, 0, GL_RED, frameWidth / 2, frameHeight / 2, 0, GL_RED, GL_UNSIGNED_BYTE, 0);
/*
    f->glActiveTexture(GL_TEXTURE0);
    f->glBindTexture(GL_TEXTURE_2D, texs[0]);
    f->glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, frameWidth, frameHeight, GL_RED, GL_UNSIGNED_BYTE, datas[0]);
    f->glUniform1i(unis[0], 0);


    f->glActiveTexture(GL_TEXTURE0+1);
    f->glBindTexture(GL_TEXTURE_2D, texs[1]); 
    f->glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, frameWidth/2, frameHeight / 2, GL_RED, GL_UNSIGNED_BYTE, datas[1]);
    f->glUniform1i(unis[1],1);


    f->glActiveTexture(GL_TEXTURE0+2);
    f->glBindTexture(GL_TEXTURE_2D, texs[2]);
    f->glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, frameWidth / 2, frameHeight / 2, GL_RED, GL_UNSIGNED_BYTE, datas[2]);
    f->glUniform1i(unis[2], 2);
*/
    f->glDrawArrays(GL_TRIANGLE_STRIP,0,4);

    program->disableAttributeArray(A_VER);
    program->disableAttributeArray(T_VER);
    program->release();

    update();
}

QOpenGLFramebufferObject *OpenGlBufferItemRenderer::createFramebufferObject(const QSize &size)
{
    QOpenGLFramebufferObjectFormat format;
    format.setAttachment(QOpenGLFramebufferObject::CombinedDepthStencil);
    return new QOpenGLFramebufferObject(size, format);
}
void OpenGlBufferItemRenderer::synchronize(QQuickFramebufferObject *item)
{
    OpenGlBufferItem *openGlBufferItem = static_cast<OpenGlBufferItem*>(item);
}

OpenGlBufferItem::OpenGlBufferItem() {

}

QQuickFramebufferObject::Renderer *OpenGlBufferItem::createRenderer() const
{
    std::cout<<"creating renderer with a = " << a << std::endl;
    return new OpenGlBufferItemRenderer(this->a);
}

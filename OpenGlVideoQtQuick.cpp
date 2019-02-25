#include "OpenGlVideoQtQuick.h"

#define GET_STR(x) #x
#define A_VER 3
#define T_VER 4

//Simple shader. Outpus the same location as input, I guess
const char *vString2 = GET_STR(
    attribute vec4 vertexIn;
    attribute vec2 textureIn;
    varying vec2 textureOut;
    void main(void)
    {
        gl_Position = vertexIn;
        textureOut = textureIn;
    }
);

const char *tString2 = GET_STR(
    varying vec2 textureOut;
    uniform sampler2D tex_y;
    uniform sampler2D tex_u;
    uniform sampler2D tex_v;
    void main(void)
    {
        vec3 yuv;
        vec3 rgb;
        yuv.x = texture2D(tex_y, textureOut).r;
        yuv.y = texture2D(tex_u, textureOut).r - 0.5;
        yuv.z = texture2D(tex_v, textureOut).r - 0.5;
        rgb = mat3(1.0, 1.0, 1.0,
            0.0, -0.39465, 2.03211,
            1.13983, -0.58060, 0.0) * yuv;
        gl_FragColor = vec4(rgb, 1.0);
    }

);

OpenGlVideoQtQuick::OpenGlVideoQtQuick():
    openGlVideoQtQuickRenderer(nullptr)
{
    connect(this, &QQuickItem::windowChanged, this, &OpenGlVideoQtQuick::handleWindowChanged);

    update();
    //setWidth(640);
    //setHeight(480);
    //width=640
    //height=480
}

void OpenGlVideoQtQuick::handleWindowChanged(QQuickWindow *win)
{
    if (win) {
        connect(win, &QQuickWindow::beforeSynchronizing, this, &OpenGlVideoQtQuick::sync, Qt::DirectConnection);
        win->setClearBeforeRendering(false);
    }
}

void OpenGlVideoQtQuick::update()
{
    if (window())
        window()->update();
}


OpenGlVideoQtQuickRenderer::~OpenGlVideoQtQuickRenderer()
{
    delete program;
}



void OpenGlVideoQtQuick::sync()
{
    if (!openGlVideoQtQuickRenderer) {
        openGlVideoQtQuickRenderer = new OpenGlVideoQtQuickRenderer();
        connect(window(), &QQuickWindow::beforeRendering, openGlVideoQtQuickRenderer, &OpenGlVideoQtQuickRenderer::render, Qt::DirectConnection);
        connect(window(), &QQuickWindow::afterRendering, this, &OpenGlVideoQtQuick::update, Qt::DirectConnection);
    }
}

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


void OpenGlVideoQtQuickRenderer::render()
{
    if (this->firstRun) {
        std::cout << "Creating QOpenGLShaderProgram " << std::endl;
        this->firstRun = false;
        program = new QOpenGLShaderProgram();
        initializeOpenGLFunctions();

        std::cout << "Fragment Shader compilation: " << program->addShaderFromSourceCode(QOpenGLShader::Fragment, tString2) << std::endl;
        std::cout << "Vertex Shader compilation: " << program->addShaderFromSourceCode(QOpenGLShader::Vertex, vString2) << std::endl;

        program->bindAttributeLocation("vertexIn",A_VER);
        program->bindAttributeLocation("textureIn",T_VER);
        std::cout << "program->link() = " << program->link() << std::endl;

        glGenTextures(3, texs);//TODO: ERASE THIS WITH glDeleteTextures
    }
    program->bind();

    //glViewport(50, 50, 50, 50);

    glVertexAttribPointer(A_VER, 2, GL_FLOAT, 0, 0, ver);
    glEnableVertexAttribArray(A_VER);

    glVertexAttribPointer(T_VER, 2, GL_FLOAT, 0, 0, tex);
    glEnableVertexAttribArray(T_VER);

    unis[0] = program->uniformLocation("tex_y");
    unis[1] = program->uniformLocation("tex_u");
    unis[2] = program->uniformLocation("tex_v");
    
    //Y
    glBindTexture(GL_TEXTURE_2D, texs[0]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RED, width, height, 0, GL_RED, GL_UNSIGNED_BYTE, 0);

    //U
    glBindTexture(GL_TEXTURE_2D, texs[1]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RED, width/2, height / 2, 0, GL_RED, GL_UNSIGNED_BYTE, 0);

    //V
    glBindTexture(GL_TEXTURE_2D, texs[2]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RED, width / 2, height / 2, 0, GL_RED, GL_UNSIGNED_BYTE, 0);

   

    glDrawArrays(GL_TRIANGLE_STRIP,0,4);

    program->disableAttributeArray(A_VER);
    program->disableAttributeArray(T_VER);
    program->release();

}

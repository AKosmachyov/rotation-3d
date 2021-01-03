#ifndef GLVIEW_HPP
#define GLVIEW_HPP

#include <QGLWidget>

class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLWidget(QWidget *parent = 0);

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
};

#endif // GLVIEW_HPP

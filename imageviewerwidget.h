#ifndef IMAGEVIEWERWIDGET_H
#define IMAGEVIEWERWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QScrollArea>

class ImageViewerWidget : public QWidget
{
    Q_OBJECT
public:
    ImageViewerWidget(QWidget *parent = 0);
    ~ImageViewerWidget();

public slots:
    void setImage(const QString& imageName);
private:
    QLabel *imageLabel;
//    QScrollArea *scrollArea;
    //double scaleFactor;

};

#endif // IMAGEVIEWERWIDGET_H

#ifndef VIDEOPLAYERWIDGET_H
#define VIDEOPLAYERWIDGET_H

#include <QWidget>
#include <QMovie>
#include <QLabel>

class VideoPlayerWidget : public QWidget
{
    Q_OBJECT
public:
    VideoPlayerWidget(QWidget *parent = 0);
    ~VideoPlayerWidget();
    static QList<QByteArray> supportedFormats();
public slots:
    void setVideo(const QString& videoName);
private:
    QMovie *movie;
    QLabel *imageLabel;
};

#endif // VIDEOPLAYERWIDGET_H

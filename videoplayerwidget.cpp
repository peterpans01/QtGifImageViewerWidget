#include "videoplayerwidget.h"

VideoPlayerWidget::VideoPlayerWidget(QWidget *parent) :
    QWidget(parent)
{
//    movie = new QMovie(this);

    imageLabel = new QLabel(this);
    imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    imageLabel->setScaledContents(true);
}

VideoPlayerWidget::~VideoPlayerWidget()
{
    delete movie;
    movie = NULL;
}

void VideoPlayerWidget::setVideo(const QString &videoName)
{
     if (!videoName.isEmpty()) {
         movie = new QMovie(videoName);
         if(movie->isValid())
         {
             movie->setSpeed(100);
             imageLabel->setMovie(movie);
             movie->start();
         }
     }
}

QList<QByteArray> VideoPlayerWidget::supportedFormats()
{
    return QMovie::supportedFormats();
}

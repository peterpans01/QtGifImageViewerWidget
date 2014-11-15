#include <QFileDialog>
#include <QMessageBox>
#include "imageviewerwidget.h"

ImageViewerWidget::ImageViewerWidget(QWidget *parent) :
    QWidget(parent)
{
    imageLabel = new QLabel(this);
    imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    imageLabel->setScaledContents(true);
}

ImageViewerWidget::~ImageViewerWidget()
{

}
void ImageViewerWidget::setImage(const QString &imageName)
{
    if (!imageName.isEmpty()) {
        QImage image(imageName);
        if (image.isNull()) {
            return;
        }


        imageLabel->setPixmap(QPixmap::fromImage(image));
        imageLabel->adjustSize();

    }
}


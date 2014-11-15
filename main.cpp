#include <QApplication>
#include <QDebug>
#include "imageviewerwidget.h"
#include "videoplayerwidget.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    VideoPlayerWidget vi;

    //link to your file
    QString s("C:\\Users\\MacroMan\\Desktop\\money_not_enough.gif");

    //check supported formats
    qDebug()<<"Type support is: "<<
                   VideoPlayerWidget::supportedFormats();

    //set video
    vi.setVideo(s);
    vi.show();

    return app.exec();
}

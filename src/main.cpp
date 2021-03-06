/* Simple photo editor that can blur (gaussian) images
 *
 * license: GPL v3
 */

#include <QApplication>
#include <QTextCodec>
#include "jpegfilter.h"


int main(int argc, char *argv[])
{
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf8"));

    QApplication a(argc, argv);
    JpegFilter photoEditor;
    photoEditor.show();

    return a.exec();
}

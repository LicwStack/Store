#include <QtWebKitWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QGuiApplication::setApplicationDisplayName(QCoreApplication::translate("main",
                                                                               "Coral Store"));
    QWebView *view=new QWebView;
    view->setContextMenuPolicy (Qt::NoContextMenu);     //noContextMenu
    view->resize(1152, 864);        //resize
    view->load(QUrl("https://github.com/LicwStack"));
    view->show();
    //center
    view->move ((QApplication::desktop()->width() - view->width())/2,(QApplication::desktop()->height() - view->height())/2);
    view->setMinimumSize (1024, 768 );       //setMinimumSize
    return app.exec();
}

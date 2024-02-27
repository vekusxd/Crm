#include <QApplication>
#include "include/mainwidget.hpp"
#include "include/logindialog.hpp"

int main(int argc, char **argv){
    QApplication app(argc, argv);

    LoginDialog dialog;
    MainWidget widget;

    switch(dialog.exec()){
    case LoginDialog::Accepted:
        qDebug() << "accepted";
        widget.show();
        return app.exec();
    default:
        qDebug() << "not accepted";
        return 0;
    }

}

#ifndef USERNAMESCREEN_H
#define USERNAMESCREEN_H

#include <QMainWindow>
#include <QtWidgets>
#include "loadingpage.h"

namespace Ui {
class UsernameScreen;
}

class UsernameScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit UsernameScreen(QWidget *parent = nullptr);
    ~UsernameScreen();

    void callLoadingPage();


signals:
//    svoid onLineEditEditingFinished(); // To get the text entered by the user
    void click(); // Custom signal to indicate the window is closed


private slots:
//    void on_loadButton_clicked();
//    void on_linepromptEdit_editingFinished();

    void on_loadButton_clicked();

    void on_helpIcon_clicked();

private:
    Ui::UsernameScreen *ui;
    QLineEdit* linepromptEdit;
    LoadingPage* loadingPage;
};

#endif // USERNAMESCREEN_H

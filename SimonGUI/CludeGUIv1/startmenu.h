#ifndef STARTMENU_H
#define STARTMENU_H

#include <QMainWindow>
#include "loadingpage.h"
#include "usernamescreen.h"

QT_BEGIN_NAMESPACE
namespace Ui { class StartMenu; }
QT_END_NAMESPACE

class StartMenu : public QMainWindow
{
    Q_OBJECT

public:
    StartMenu(QWidget *parent = nullptr);
    ~StartMenu();

private slots:
    void on_startButton_clicked();

private:
    Ui::StartMenu *ui;
    LoadingPage* loadingPage;
    UsernameScreen* userNameScreen;
};
#endif // STARTMENU_H

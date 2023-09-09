#include "loadingpage.h"
#include "ui_loadingpage.h"
#include<QMovie>


LoadingPage::LoadingPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoadingPage)
{
    ui->setupUi(this);

    QMovie *spinnerMovie = new QMovie(":/Images/loadingspinner.gif");
    ui->spinnerLabel->setMovie(spinnerMovie);
    spinnerMovie->start();


}

LoadingPage::~LoadingPage()
{
    emit closed(); // Emit the closed signal when the window is closed
    delete ui;
}

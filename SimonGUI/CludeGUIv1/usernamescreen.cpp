#include "usernamescreen.h"
#include "ui_usernamescreen.h"
#include <QMessageBox>
#include <QtWidgets>

UsernameScreen::UsernameScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UsernameScreen),
    loadingPage(nullptr) // Initialize loadingPage pointer to nullptr
{
    ui->setupUi(this);
//    Ui::UsernameScreen::QWidget linepromptEdit;



    // Get the text from the QTextEdit

//    connect(linepromptEdit, &QLineEdit::editingFinished, this, &UsernameScreen::on_linepromptEdit_editingFinished);
//    connect(ui->loadButton, &QPushButton::clicked, this, &UsernameScreen::on_loadButton_clicked);

    connect(ui->loadButton, &QPushButton::clicked,this,&UsernameScreen::on_loadButton_clicked);
}

UsernameScreen::~UsernameScreen()
{
    emit click(); // Emit the click signal when the window is closed
    delete ui;
}



void UsernameScreen::callLoadingPage()
{

    if (!loadingPage) {
        loadingPage = new LoadingPage(this); // Create a new window instance if it doesn't exist
        connect(loadingPage, &LoadingPage::closed, this, [this]() {
            delete loadingPage; // Delete the new window instance when it's closed
            loadingPage = nullptr;

        });
    }
    this->hide(); // Hide the current window (StartMenu)
    loadingPage->show();
}


void UsernameScreen::on_loadButton_clicked()
{
    QString readtext = ui->linepromptEdit->text();

    if (!readtext.isEmpty())
    {
        // If there is text, open a new window (you can customize this)
        QMessageBox::information(this, "Message", "Login successful. You're joined in an active game session.");

        callLoadingPage();
    }
    else
    {
        // If there is no text, show an incomplete message
        QMessageBox::warning(this, "Error", "Invalid playerID. Please try again.");
    }
}


void UsernameScreen::on_helpIcon_clicked()
{
    QMessageBox::question(this, "Help", "A username starts with your group number, underscore and then a name. If it’s an AI, it will "
    "be group number1 followed by ”_” and ”AI” + a number (start at 1) eg. \"10 AI1\" For a "
    "human player the ”_” is followed by a name that will be displayed eg. ”3 TheLegend27.");

}


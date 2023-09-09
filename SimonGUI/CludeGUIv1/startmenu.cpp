#include "startmenu.h"
#include "./ui_startmenu.h"

StartMenu::StartMenu(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::StartMenu),
//      loadingPage(nullptr) // Initialize loadingPage pointer to nullptr
      userNameScreen(nullptr) // Initialise username screen pointer to nullptr
{
    ui->setupUi(this);
    connect(ui->startButton, &QPushButton::clicked, this, &StartMenu::on_startButton_clicked);
}

StartMenu::~StartMenu()
{
    delete ui;
}


void StartMenu::on_startButton_clicked()
{
    if (!userNameScreen) {
        userNameScreen = new UsernameScreen(this); // Create a new window instance if it doesn't exist
        connect(userNameScreen, &UsernameScreen::click, this, [this]() {
            delete userNameScreen; // Delete the new window instance when it's closed
            userNameScreen = nullptr;
        });
    }
    this->hide(); // Hide the current window (StartMenu)
    userNameScreen->show();
}


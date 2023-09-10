#ifndef LOADINGPAGE_H
#define LOADINGPAGE_H

#include <QMainWindow>

namespace Ui {
class LoadingPage;
}

class LoadingPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoadingPage(QWidget *parent = nullptr);
    ~LoadingPage();

signals:
    void closed(); // Custom signal to indicate the window is closed

private:
    Ui::LoadingPage *ui;
};

#endif // LOADINGPAGE_H

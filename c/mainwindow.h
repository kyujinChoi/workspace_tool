#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void On_Clicked_Quit();
    void on_reFreshButton_clicked();
    void on_clockInButton_clicked();
    void on_clockOutButton_clicked();

private:
    void displayConfig();
    void setButtons();
    struct tm* cur_time;
    Ui::MainWindow *ui;
    std::vector<std::string> cfg_vec;
    int state = 0; // 0 : before clockin, 1 : clocked in, 2 : clocked out
};
#endif // MAINWINDOW_H

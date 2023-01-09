#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "core.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cfg_vec.resize(12);
    connect(ui->actionQuit, SIGNAL(triggered()), this, SLOT(On_Clicked_Quit()));
    ui->clockInButton->setEnabled(false);
    ui->clockOutButton->setEnabled(false);
    on_reFreshButton_clicked();
    // QString txt = "test";
    // ui->monInLabel->setText(txt);
}
void MainWindow::setButtons()
{
    if(state == 0)
    {
        ui->clockInButton->setEnabled(true);
        ui->clockOutButton->setEnabled(false);
    }
    else if(state == 1)
    {
        ui->clockInButton->setEnabled(false);
        ui->clockOutButton->setEnabled(true);
    }
    else if(state == 2)
    {
        ui->clockInButton->setEnabled(false);
        ui->clockOutButton->setEnabled(false);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::On_Clicked_Quit()
{
    this->close();
}


void MainWindow::displayConfig()
{
    std::string cfg = getConfig();
    cfg_vec = splitConfig(cfg);
    for(int i = 0 ; i < cfg_vec.size(); i++)
    {
        if(cfg_vec[i] == "") continue;
        switch(i)
        {
            case 2:
                ui->monInLabel->setStyleSheet("background-color: rgb(211, 215, 207);");
                ui->monInLabel->setText(QString::fromStdString(cfg_vec[i]));
                break;
            case 3:
                ui->monOutLabel->setStyleSheet("background-color: rgb(211, 215, 207);");
                ui->monOutLabel->setText(QString::fromStdString(cfg_vec[i]));
                break;
            case 4:
                ui->tueInLabel->setStyleSheet("background-color: rgb(211, 215, 207);");
                ui->tueInLabel->setText(QString::fromStdString(cfg_vec[i]));
                break;
            case 5:
                ui->tueOutLabel->setStyleSheet("background-color: rgb(211, 215, 207);");
                ui->tueOutLabel->setText(QString::fromStdString(cfg_vec[i]));
                break;
            case 6:
                ui->wedInLabel->setStyleSheet("background-color: rgb(211, 215, 207);");
                ui->wedInLabel->setText(QString::fromStdString(cfg_vec[i]));
                break;
            case 7:
                ui->wedOutLabel->setStyleSheet("background-color: rgb(211, 215, 207);");
                ui->wedOutLabel->setText(QString::fromStdString(cfg_vec[i]));
                break;
            case 8:
                ui->thuInLabel->setStyleSheet("background-color: rgb(211, 215, 207);");
                ui->thuInLabel->setText(QString::fromStdString(cfg_vec[i]));
                break;
            case 9:
                ui->thuOutLabel->setStyleSheet("background-color: rgb(211, 215, 207);");
                ui->thuOutLabel->setText(QString::fromStdString(cfg_vec[i]));
                break;
            case 10:
                ui->friInLabel->setStyleSheet("background-color: rgb(211, 215, 207);");
                ui->friInLabel->setText(QString::fromStdString(cfg_vec[i]));
                break;
            case 11:
                ui->friOutLabel->setStyleSheet("background-color: rgb(211, 215, 207);");
                ui->friOutLabel->setText(QString::fromStdString(cfg_vec[i]));
                break;
        }
    }
}
void MainWindow::on_reFreshButton_clicked()
{
    system("cd ../../python && python3 getWorkTime.py");
    displayConfig();
    getCurrentTime(cur_time);
    state = getState(cur_time, cfg_vec);
    if(state == -1)
    {
        std::cout << "error getState()\n";
        exit(0);
    }
    setButtons();
}

void MainWindow::on_clockInButton_clicked()
{
    system("cd ../../python && python3 workspace.py");
    on_reFreshButton_clicked();
}

void MainWindow::on_clockOutButton_clicked()
{
    system("cd ../../python && python3 workspace.py");
    on_reFreshButton_clicked();
}

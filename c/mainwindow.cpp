#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "core.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionQuit, SIGNAL(triggered()), this, SLOT(On_Clicked_Quit()));
    // QString txt = "test";
    // ui->monInLabel->setText(txt);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::On_Clicked_Quit()
{
    this->close();
}


void MainWindow::on_reFreshButton_clicked()
{
    system("cd ../../python && python3 getWorkTime.py");
    std::string cfg = getConfig();
    std::vector<std::string> cfg_vec = splitConfig(cfg);
    ui->monInLabel->setText(QString::fromStdString(cfg_vec[2]));

}

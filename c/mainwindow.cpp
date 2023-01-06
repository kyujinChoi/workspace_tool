#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionQuit, SIGNAL(triggered()), this, SLOT(On_Clicked_Quit()));
    QString txt = "test";
    ui->monInLabel->setText(txt);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::On_Clicked_Quit()
{
    this->close();
}

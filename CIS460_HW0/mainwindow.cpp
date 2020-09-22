#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // initializes all the GUI widgets
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked(bool)), ui->checkBox, SLOT(stateChanged(bool)));
    connect(ui->pushButton, SIGNAL(clicked(bool)), ui->spinBox, SLOT(stepUp()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

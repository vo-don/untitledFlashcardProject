#include "mainwindow.h"
#include "CreateNewDeck.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    CreateNewDeck *newWidget = new CreateNewDeck();
    ui->gridLayout->addWidget(newWidget, 0, 2); // (x = 0, y = 1) coordinates for grid layout
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CreateNewDeck_clicked()
{
    ui-> // Next time : When a new deck is created, how can we open a new window with a user prompt for the new deck's name?
}


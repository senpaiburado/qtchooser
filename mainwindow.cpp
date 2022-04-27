#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QApplication>

#include "card.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->exitButton, &QPushButton::clicked, this, &QApplication::exit);

    connect(ui->allAppsBtn, &QPushButton::clicked, this, [&]() {
        onMenuSelected(ui->allAppsBtn);
    });
    connect(ui->preinstalledBtn, &QPushButton::clicked, this, [&]() {
        onMenuSelected(ui->preinstalledBtn);
    });
    connect(ui->virtualBtn, &QPushButton::clicked, this, [&]() {
        onMenuSelected(ui->virtualBtn);
    });
    connect(ui->userBtn, &QPushButton::clicked, this, [&]() {
        onMenuSelected(ui->userBtn);
    });

    ui->allAppsBtn->setChecked(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onMenuSelected(QPushButton *clickedBtn)
{
    ui->allAppsBtn->setChecked(false);
    ui->preinstalledBtn->setChecked(false);
    ui->virtualBtn->setChecked(false);
    ui->userBtn->setChecked(false);
    clickedBtn->setChecked(true);

    ui->title->setText(clickedBtn->text());
}


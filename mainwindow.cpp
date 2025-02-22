#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this, "Smth", "Text");
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::critical(this, "Smth", "ErrorText");
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "Smth", "InfoText");
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this, "Smth", "WarningText");
}


void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Smth", "QuestionText", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        ui -> label -> setText("ReplyValue = Yes");
        qDebug() << "yes";
    } else {
        ui -> label -> setText("ReplyValue = No");
        qDebug() << "no";
    }
}


void MainWindow::on_exitBtn_clicked()
{
    QApplication::quit();
}


void MainWindow::on_gitBtn_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/The-SGR"));
}


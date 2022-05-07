#include <QFile>
#include <QTextStream>
#include <iostream>

using std::string;
using std::endl;
using std::cout;

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Node.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , _node("turtlebot", LogSeverity::info)
{
    ui->setupUi(this);
    loadTextFile();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Receive(const string message)
{
    cout << message << endl;
}

// Load input.txt into the text box
void MainWindow::loadTextFile()
{
    // Since our log level is set to info, we ignore debug messages
    _node.LogDebug("We're loading a text file, but it's just a debug message, so we'll ignore it");
    QFile inputFile(":/input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}



void MainWindow::on_findButton_clicked()
{
    QString searchString = ui->lineEdit->text();
    ui->textEdit->find(searchString, QTextDocument::FindWholeWords);
    // This message will be printed to standard out
    _node.LogInfo("Clicked find button");
}


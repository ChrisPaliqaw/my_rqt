#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Node.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, Subscriber
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Receive(const std::string message);

private slots:
    void on_findButton_clicked();

private:
    Ui::MainWindow *ui;
    Node _node;
    void loadTextFile();
};
#endif // MAINWINDOW_H

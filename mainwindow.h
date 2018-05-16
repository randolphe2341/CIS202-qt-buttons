/*********************************************

  Name: mainwindow.h
  Description: This is the header file for MainWindow.
  Author: Ethan Randolph
  Email: randolphe@student.vvc.edu
  Created: 5/15/18

 *******************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMainWindow>
#include <QPushButton>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

public slots:
    void onbutton1Press(bool toggled);
    void onbutton2Press(bool toggled);
    void onbutton3Press(bool toggled);

private:
    QPushButton *button1;
    QLabel *label1;
    QPushButton *button2;
    QLabel *label2;
    QPushButton *button3;
    QLabel *label3;

};

#endif // MAINWINDOW_H

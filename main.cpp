/*********************************************

  Name: main.cpp
  Description: This file contains the main function.
  Author: Ethan Randolph
  Email: randolphe@student.vvc.edu
  Created: 5/15/18

 *******************************************/
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

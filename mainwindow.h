#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#ifndef TWODARRAY_H
#include "twodarray.h"
#endif




class MainWindow : public QMainWindow
{
    Q_OBJECT


QVector<QVector<float>> myVector;


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void testFunction();

    TwoDArray* array;
private:

};

#endif // MAINWINDOW_H

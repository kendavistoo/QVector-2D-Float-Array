#include "mainwindow.h"

//---------- class MainWindow ----------

MainWindow :: MainWindow(QWidget *parent) : QMainWindow(parent)
{
    qDebug()<<"Constructor   MainWindow";

    array = new TwoDArray(5, 5, this);

    float value = 0.0;
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){

            array->setValue(i,j,value);
            value = value + 1.0;
        }//for j
    }//for i
}//Constructor

//---------- Destructor ----------

MainWindow :: ~MainWindow()
{
    qDebug()<<"Destructor   MainWindow";
}//Destructor

//---------- testFunction ----------

void MainWindow :: testFunction(){

    float value;
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){

            value = array->getValue(i,j);

            qDebug()<<i<<"   "<<j<<"   "<<value;
        }//for j
    }//for i
}//testFunction





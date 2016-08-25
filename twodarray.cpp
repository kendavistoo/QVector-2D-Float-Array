#include "twodarray.h"



//---------- class TwoDArray ----------

TwoDArray :: TwoDArray(quint32 dimmA, quint32 dimmB, QObject* parent) : QObject(parent)
{
    qDebug()<<"Constructor  TwoDArray";

    dimA = dimmA;
    dimB = dimmB;

    quint32 num = dimA * dimB;

    data.resize(num);
}//Constructor

//---------- Destructor ----------

TwoDArray :: ~TwoDArray()
{
    qDebug()<<"Destructor  TwoDArray";

    data.clear();
}//Destructor

//---------- setValue ----------

void TwoDArray :: setValue(quint32 indexA, quint32 indexB, float value)
{
    quint32 dex = indexA + indexB * dimB;
    data[dex] = value;
}//setValue

//---------- getValue ----------

float TwoDArray :: getValue(quint32 indexA, quint32 indexB)
{
    quint32 dex = indexA + indexB * dimB;
    return data.at(dex);
}//getValue


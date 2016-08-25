#ifndef TWODARRAY_H
#define TWODARRAY_H


#include <QtCore>
#include <QDebug>
#include <QVector>

#include <cmath>
#include <stdlib.h>

static const quint32 TDA_SIZE_OF_FLOAT = sizeof(float);

class TwoDArray : public QObject
{
    Q_OBJECT

public:
    TwoDArray(quint32 dimmA, quint32 dimmB, QObject* parent = 0);

    ~TwoDArray();

    void  setValue (quint32 indexA, quint32 indexB, float value);
    float getValue (quint32 indexA, quint32 indexB);

    quint32 dimA, dimB;

    QVector<float>  data;
};

#endif // TWODARRAY_H



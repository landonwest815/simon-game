#ifndef MODEL_H
#define MODEL_H

#include <QObject>

class model : public QObject
{
    Q_OBJECT
public:
    explicit model(QObject *parent = nullptr);

//public slots:
//    void something();

//signals:
//    void somethingelse();

//private:
//    int data;

};

#endif // MODEL_H

#ifndef BULLSHIT_H
#define BULLSHIT_H

#include <QObject>

class Bullshit : public QObject
{
    Q_OBJECT
public:
    explicit Bullshit(QObject *parent = nullptr);

signals:

};

#endif // BULLSHIT_H

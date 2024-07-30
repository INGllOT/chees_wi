#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

class Player
{
public:
    Player(QString name);
    QString name;
    QString getName();

};

#endif // PLAYER_H

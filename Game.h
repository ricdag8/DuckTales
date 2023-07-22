#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QTimer>
#include "Scrooge.h"

class Game:public QGraphicsView
{
    Q_OBJECT
private:
    //GameState _state;
    Scrooge* _player;
    QGraphicsScene* _world;
    QTimer _engine;
    static Game* _uniqueInstance;
    Game();
public:
    static Game* instance();
    QGraphicsScene* world(){return _world;}
};

#endif // GAME_H

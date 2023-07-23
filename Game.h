#pragma once

#include <QGraphicsView>
#include <QTimer>
#include "Scrooge.h"

namespace DT
{
    class Game;
    class Scrooge;
    enum class GameState{READY, TITLE_SCREEN, RUNNING, PAUSED, GAME_OVER};
}

class DT::Game:public QGraphicsView
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
    Scrooge* player(){return _player;}

public slots:


    void start();


};
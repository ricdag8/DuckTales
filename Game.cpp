#include "Game.h"

using namespace DT;

Game* Game::_uniqueInstance = 0;
Game* Game::instance()
{
    if (_uniqueInstance == 0)
        _uniqueInstance = new Game();
    return _uniqueInstance;
}


Game::Game() : QGraphicsView()
{
    _world = new QGraphicsScene();
    _world->setSceneRect(0, 0, 1920, 1080);
    setScene(_world);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setInteractive(false);
    // Game::instance()->world()->setBackgroundBrush(QBrush(QImage(":/background/background.png")));

    //QObject::connect(&_engine, SIGNAL(timeout()), this, SLOT(nextFrame()));
    _engine.setTimerType(Qt::PreciseTimer);
    _engine.setInterval(1000 / 60);
}

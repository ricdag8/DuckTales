#include "Game.h"
#include "GameConfig.h"
#include "Loader.h"

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
    _world->setSceneRect(0, -TILE * 68, TILE * 128, TILE * 15);
    setScene(_world);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setInteractive(false);
    Game::instance()->world()->setBackgroundBrush(QBrush(QImage(":/background/theMoon.png")));

    //QObject::connect(&_engine, SIGNAL(timeout()), this, SLOT(nextFrame()));
    _engine.setTimerType(Qt::PreciseTimer);
    _engine.setInterval(1000 / 60);
}


void Game::start()
{

		_world->clear();
		_engine.start();
        // _player = Loader::load("theMoon"); Momentaneamente commentato finchè Loader non verrà implementata, da qui si piazza Scrooge


}

#include "Loader.h"
#include "Scrooge.h"
#include "Game.h"
#include "GameConfig.h"
#include <QBrush>

using namespace DT;

Scrooge* Loader::load(std::string levelName)
{
    if(levelName=="theMoon")
    {
        Game::instance()->world()->addPixmap(QPixmap(":/theMoon.png"));
        
        new block()

    }
}
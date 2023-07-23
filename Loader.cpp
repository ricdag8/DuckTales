#include <QBrush>
#include "Loader.h"
#include "Game.h"
#include "GameConfig.h"
#include "Block.h"

using namespace DT;

DT::Scrooge* DT::Loader::load(std::string levelName, QGraphicsScene * scene)
{
    if(levelName=="theMoon")
    {
        Game::instance()->world()->addPixmap(QPixmap(":/theMoon.png"));
        
        new block(QPointF(0, TILE), 54*TILE, 2.5*TILE);
        new block(QPointF(58*TILE, TILE), 4*TILE, 2.5*TILE);
        new block(QPointF(64, TILE), 18*TILE, 2.5*TILE);
        new block(QPointF(93, -3*TILE), 3*TILE, 6.5*TILE);
        new block(QPointF(98, TILE), 8*TILE, 2.5*TILE);
        new block(QPointF(108, TILE), 4*TILE, 2.5*TILE);
        new block(QPointF(112, TILE), 7*TILE, 7*TILE);
        new block(QPointF(121, TILE), 2*TILE, 7*TILE);
        new block(QPointF(123, 0), 2*TILE, 8*TILE);
        new block(QPointF(123, 0), 2*TILE, 8*TILE);
        new block(QPointF(124, -2*TILE), 1*TILE, 10*TILE);
        new block(QPointF(125, -5*TILE), 1*TILE, 13*TILE);
        new block(QPointF(126, -8*TILE), 2*TILE, 26.5*TILE);

    }
    return nullptr;
}

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
        
        //primo livello
        new block(QPointF(0, TILE), 54*TILE, 2.5*TILE);
        new block(QPointF(26*TILE, 0), TILE, TILE);
        new block(QPointF(48*TILE, 0), TILE, TILE);
        new block(QPointF(58*TILE, TILE), 4*TILE, 2.5*TILE);
        new block(QPointF(64, TILE), 18*TILE, 2.5*TILE);
        new block(QPointF(93, -3*TILE), 3*TILE, 6.5*TILE);
        new block(QPointF(98, TILE), 8*TILE, 2.5*TILE);
        new block(QPointF(100*TILE, 0), TILE, TILE);
        new block(QPointF(108, TILE), 4*TILE, 2.5*TILE);
        new block(QPointF(112, TILE), 7*TILE, 7*TILE);
        new block(QPointF(121, TILE), 2*TILE, 7*TILE);
        new block(QPointF(123, 0), 2*TILE, 8*TILE);
        new block(QPointF(123, 0), 2*TILE, 8*TILE);
        new block(QPointF(124, -2*TILE), 1*TILE, 10*TILE);
        new block(QPointF(125, -5*TILE), 1*TILE, 13*TILE);
        new block(QPointF(126, -8*TILE), 2*TILE, 26.5*TILE);

        //primo livello verde
        new block(QPointF(30*TILE, -14*TILE), 2*TILE, 7*TILE);
        new block(QPointF(32*TILE, -14*TILE), 16*TILE, 2.5*TILE);
        new block(QPointF(48*TILE, -14*TILE), 6*TILE, 7*TILE);
        new block(QPointF(54*TILE, -14*TILE), 1*TILE, 9*TILE);
        new block(QPointF(57*TILE, -14*TILE), 1*TILE, 9*TILE);
        new block(QPointF(58*TILE, -14*TILE), 6*TILE, 7*TILE);
        new block(QPointF(64*TILE, -14*TILE), 20*TILE, 2.5*TILE);
        new block(QPointF(70*TILE, -15*TILE), 6*TILE, 1*TILE);
        new block(QPointF(82*TILE, -16*TILE), 16*TILE, 2*TILE);
        new block(QPointF(94*TILE, -18*TILE), 8*TILE, 2*TILE);
        new block(QPointF(100*TILE, -20*TILE), 6*TILE, 2*TILE);
        new block(QPointF(104*TILE, -22*TILE), 4*TILE, 2*TILE);
        new block(QPointF(106*TILE, -23*TILE), 3*TILE, 1*TILE);
        new block(QPointF(26*TILE, -16*TILE), 4*TILE, 2*TILE);
        new block(QPointF(25*TILE, -16*TILE), 1*TILE, 4*TILE);
        new block(QPointF(22*TILE, -16*TILE), 1*TILE, 4*TILE);
        new block(QPointF(14*TILE, -16*TILE), 8*TILE, 2*TILE);
        new block(QPointF(10*TILE, -18*TILE), 8*TILE, 2*TILE);
        new block(QPointF(6*TILE, -20*TILE), 6*TILE, 2*TILE);
        new block(QPointF(4*TILE, -22*TILE), 4*TILE, 2*TILE);
        new block(QPointF(3*TILE, -23*TILE), 3*TILE, 1*TILE);
        new block(QPointF(106*TILE, -23*TILE), 3*TILE, 1*TILE);
        new block(QPointF(32*TILE, -8*TILE), 16*TILE, 1*TILE);
        new block(QPointF(64*TILE, -8*TILE), 18*TILE, 1*TILE);

        //secondo livello verde
        new block(QPointF(2*TILE, -38*TILE), 4*TILE, 11.5*TILE);
        new block(QPointF(6*TILE, -29*TILE), 4*TILE, 2.5*TILE);
        new block(QPointF(10*TILE, -38*TILE), 9*TILE, 11.5*TILE);
        new block(QPointF(19*TILE, -32*TILE), 2*TILE, 5.5*TILE);
        new block(QPointF(21*TILE, -30*TILE), 2*TILE, 3.5*TILE);
        new block(QPointF(23*TILE, -29*TILE), 25*TILE, 2.5*TILE);
        new block(QPointF(48*TILE, -29*TILE), 7*TILE, 5*TILE);
        new block(QPointF(57*TILE, -29*TILE), 7*TILE, 5*TILE);
        new block(QPointF(64*TILE, -38*TILE), 6*TILE, 11.5*TILE);
        new block(QPointF(70*TILE, -29*TILE), 10*TILE, 2.5*TILE);
        new block(QPointF(80*TILE, -29*TILE), 7*TILE, 5*TILE);
        new block(QPointF(90*TILE, -29*TILE), 7*TILE, 5*TILE);
        new block(QPointF(97*TILE, -38*TILE), 1*TILE, 6*TILE);
        new block(QPointF(97*TILE, -29*TILE), 5*TILE, 2.5*TILE);
        new block(QPointF(98*TILE, -36*TILE), 2*TILE, 4*TILE);
        new block(QPointF(101*TILE, -33*TILE), 1*TILE, 6.5*TILE);
        new block(QPointF(102*TILE, -30*TILE), 2*TILE, 3.5*TILE);
        new block(QPointF(104*TILE, -33*TILE), 2*TILE, 6.5*TILE);
        new block(QPointF(106*TILE, -38*TILE), 4*TILE, 11.5*TILE);

        //terzo livello verde
        new block(QPointF(4*TILE, -48*TILE), 2*TILE, 6.5*TILE);
        new block(QPointF(6*TILE, -50*TILE), 2*TILE, 8.5*TILE);
        new block(QPointF(8*TILE, -51*TILE), 2*TILE, 3*TILE);
        new block(QPointF(10*TILE, -52*TILE), 2*TILE, 4*TILE);
        new block(QPointF(12*TILE, -53*TILE), 6*TILE, 3*TILE);
        new block(QPointF(18*TILE, -53*TILE), 28*TILE, TILE);
        new block(QPointF(66*TILE, -53*TILE), 15*TILE, TILE);
        new block(QPointF(80*TILE, -68*TILE), 4*TILE, 16*TILE);
        new block(QPointF(84*TILE, -68*TILE), 2*TILE, 15*TILE);
        new block(QPointF(86*TILE, -68*TILE), TILE, 14*TILE);
        new block(QPointF(8*TILE, -44*TILE), 4*TILE, 2.5*TILE);
        new block(QPointF(12*TILE, -45*TILE), 9*TILE, 3.5*TILE);
        new block(QPointF(21*TILE, -44*TILE), 1*TILE, 7*TILE);
        new block(QPointF(22*TILE, -42*TILE), 1*TILE, 3*TILE);
        new block(QPointF(25*TILE, -42*TILE), 1*TILE, 3*TILE);
        new block(QPointF(26*TILE, -44*TILE), 6*TILE, 7*TILE);
        new block(QPointF(32*TILE, -44*TILE), 14*TILE, 2.5*TILE);
        new block(QPointF(46*TILE, -53*TILE), 8*TILE, 11.5*TILE);
        new block(QPointF(54*TILE, -44*TILE), 26*TILE, 2.5*TILE);
        new block(QPointF(64*TILE, -53*TILE), 2*TILE, 7*TILE);
        new block(QPointF(80*TILE, -44*TILE), 6*TILE, 6*TILE);
        new block(QPointF(86*TILE, -44*TILE), 1*TILE, 5*TILE);
        new block(QPointF(89*TILE, -44*TILE), 1*TILE, 5*TILE);
        new block(QPointF(90*TILE, -44*TILE), 4*TILE, 6*TILE);
        new block(QPointF(94*TILE, -44*TILE), 2*TILE, 12*TILE);
        new block(QPointF(96*TILE, -44*TILE), 10*TILE, 2.5*TILE);

        new block(QPointF(89*TILE, -59*TILE), TILE, 5*TILE);
        new block(QPointF(90*TILE, -59*TILE), 2*TILE, 6*TILE);
        new block(QPointF(92*TILE, -61*TILE), 2*TILE, 9*TILE);
        new block(QPointF(94*TILE, -61*TILE), 2*TILE, 11*TILE);
        new block(QPointF(96*TILE, -61*TILE), 2*TILE, 4.5*TILE);
        new block(QPointF(96*TILE, -53*TILE), 4*TILE, 3*TILE);
        new block(QPointF(100*TILE, -52*TILE), 2*TILE, 4*TILE);
        new block(QPointF(102*TILE, -51*TILE), 2*TILE, 3*TILE);
        new block(QPointF(104*TILE, -50*TILE), 2*TILE, 4*TILE);
        new block(QPointF(106*TILE, -48*TILE), 2*TILE, 6.5*TILE);
        new block(QPointF(108*TILE, -46*TILE), TILE, 4.5*TILE);



    }
    return nullptr;
}

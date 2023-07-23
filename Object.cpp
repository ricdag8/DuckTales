#include <QPainter>
#include <QBrush>
#include <QPen>
#include "Object.h"
#include "Game.h"
#include "GameConfig.h"

using namespace DT;

static int created=0;

Object::Object(QPointF pos, double width, double height)
{
    _id=created++;
    _collidable=true;
    _compenetrable=false;
    _boundingRect=QRectF(0,0,width,height);
    _collider=_boundingRect;

    _sprite=nullptr;
    _animRect=nullptr;

    Game::instance()->world()->addItem(this);

    setPos(pos);
}

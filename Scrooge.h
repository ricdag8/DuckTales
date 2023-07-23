#ifndef SCROOGE_H
#define SCROOGE_H
#include <QPointF>


class Scrooge
{
private:
    bool _swinging;
    bool _dying;
    bool _pogoing;
    bool _climbing;
    bool _invincible;
public:
    Scrooge(QPointF pos);
    bool swinging(){ return _swinging; }
    bool dying(){ return _dying; }
    bool pogoing(){ return _pogoing; }
    bool climbing(){ return _climbing; }
    bool invincibile(){ return _invincible; }
};

#endif // SCROOGE_H

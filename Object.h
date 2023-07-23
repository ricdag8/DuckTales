#ifndef OBJECT_H_
#define OBJECT_H_

#include <QGraphicsItem>

namespace DT
{
    class Object;
}

class DT::Object : public QGraphicsItem
{
    protected:
        QRectF _boundingRect;
        QRectF _collider;
        bool _collidable;
        bool _compenetrable;

        QPixmap* _sprite;
        QPixmap* _animRect;

        int _id;
        bool _colliderVisible;

    public:
        Object(QPointF pos, double width, double height);

        int id() const {return _id;}
        QRectF boundingRect() const override {return _boundingRect;}
        QRectF collider() const {return _collider;}
        virtual bool collidable() const {return _collidable;}
        bool comperentrable() const {return _compenetrable;}
        //completare implementazione metodi
}

#endif
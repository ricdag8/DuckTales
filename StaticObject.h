#ifndef STATICOBJECT_H_
#define STATICOBJECT_H_

#include "Object.h"


namespace DT
{
    class StaticObject;
}

class DT::StaticObject
{
    public:
        StaticObject(QPointF pos, int width, int height) : Object(pos,width,height){}
};

#endif
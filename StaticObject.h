#ifndef STATICOBJECT_H_
#define STATICOBJECT_H_

#include <QPixmap>
#include "Object.h"

namespace DT{
    class StaticObject;
}

class DT::StaticObject : public Object
{
    public:
        StaticObject(QPointF pos, double width, double height) /*: Object(pos,width,height)*/{}
};

#endif

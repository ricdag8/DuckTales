#ifndef BLOCK_H
#define BLOCK_H

#include "StaticObject.h"

namespace DT
{
    class block;
}

class DT::block{
    public:
        block(QPointF _pos, double width, double height) : StaticObject(pos, width, height){}

};

#endif
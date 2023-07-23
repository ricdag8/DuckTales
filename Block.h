#ifndef BLOCK_H
#define BLOCK_H

#include "StaticObject.h"

namespace DT
{
    class block;
}

class DT::block{
    public:
        block(QPointF _pos, int width, int height) : StaticObject(pos, width, height){}

};

#endif
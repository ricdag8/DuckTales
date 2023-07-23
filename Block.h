/*#ifndef BLOCK_H
#define BLOCK_H
#include "Object.h"

namespace DT
{
    class block;
}


class Block{
    public:
        enum class Type {BRICK, WALL, QUESTION, HIDDEN};
        Block(QPointF _pos, double width, double height) : Object(pos, width, height){};
    protected:
        QPointF _pos;
        Block::Type _type;
        bool _bouncing;
        bool _disabled;
        bool _spawned;
};

#endif
*/

#ifndef LOADER_H
#define LOADER_H

#include <iostream>
#include <QGraphicsScene>

namespace DT
{
    class Loader;
    class Scrooge;
} // namespace DT

class DT::Loader
{
    public:
        static Scrooge* load(std::string levelName, QGraphicsScene * scene);
};


#endif

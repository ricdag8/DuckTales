#ifndef LOADER_H
#define LOADER_H

#include <iostream>

namespace DT
{
    class Loader;
    class Scrooge;
} // namespace DT

class DT::Loader
{
    public:
        static Scrooge* load(std::string levelName);
};

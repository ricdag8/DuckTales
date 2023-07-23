#ifndef SPRITES_H
#define SPRITES_H

#include <QPixmap>
#include <map>

namespace DT
{
    class Sprites;
}


class Sprites
{
    private:
        std::map<std::string, QPixmap> _sprites;
        Sprites();
    
    public:
        static Sprites* instance();

        QPixmap* getSprite(const std::string& id);
        void getAnimation(const std::string& id, QRect animOutput[]);
        QPixmap getTexture(const std::string& id);
        QPixmap getText(std::string text, int fill=0, QColor color=Qt::white);
};

#endif

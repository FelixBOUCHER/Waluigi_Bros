#ifndef LEVEL_BLOCK_H
#define LEVEL_BLOCK_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class levelblock: public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    levelblock(int index, int x, int y, QGraphicsItem * parent=0);
    int squash;
private:
};

#endif // LEVEL_BLOCK_H

#ifndef LEVEL_H
#define LEVEL_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Level: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Level(QGraphicsItem * parent=0);
    ~Level();
    void Load(char *filename);
    void Build(int largeur, int hauteur, int index);
private:
};

#endif // LEVEL_H

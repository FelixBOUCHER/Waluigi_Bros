#include "game.h"
#include "enemy.h"
#include "wall.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QBrush>
#include <QImage>

Game::Game(QWidget *parent)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,20200,1200);

    setScene(scene);
    //setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(20200,1200);

    LEVEL = new Level();
    scene -> addItem(LEVEL);
    LEVEL->Load("/auto_home/fboucher/WAH_Maker/images/LevelDesign/Level1.txt");

    WAH = new Waluigi();
    WAH -> Init(100,1200);
    WAH -> setFlag(QGraphicsItem::ItemIsFocusable);
    WAH -> setFocus();
    scene -> addItem(WAH);

    //Left_Wall = new Wall(0,-800);
    //Right_Wall = new Wall(1580,-80);
    //scene -> addItem(Left_Wall);
    //scene -> addItem(Right_Wall);

    QTimer * timer_WAH = new QTimer();
    //QObject::connect(timer_WAH,SIGNAL(timeout()),WAH,SLOT(THE_GREAT_WAH()));
    timer_WAH->start(14000);

    show();
}

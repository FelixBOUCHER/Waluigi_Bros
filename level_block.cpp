#include "level_block.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <iostream>
#include <fstream>

using namespace std;

levelblock::levelblock(int index, int x, int y, QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)
{
    cerr << "Recu : " << x << " " << y << " : " << index << endl;
    setPos(x*100, y*100);
    if(index == 0) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/0.png"));
    if(index == 1) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/1.png"));
    if(index == 2) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/2.png"));
    if(index == 3) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/3.png"));
    if(index == 4) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/4.png"));
    if(index == 5) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/5.png"));
    if(index == 6) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/6.png"));
    if(index == 7) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/7.png"));
    if(index == 8) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/8.png"));
    if(index == 9) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/9.png"));
    if(index == 10) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/10.png"));
    if(index == 11) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/11.png"));
    if(index == 12) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/12.png"));
    if(index == 13) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/13.png"));
    if(index == 14) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/14.png"));
    if(index == 15) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/15.png"));
    if(index == 16) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/16.png"));
    if(index == 17) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/17.png"));
    if(index == 18) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/18.png"));
    if(index == 19) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/19.png"));
    if(index == 20) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/20.png"));
    if(index == 21) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/21.png"));
    if(index == 22) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/22.png"));
    if(index == 23) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/23.png"));
    if(index == 24) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/24.png"));
    if(index == 25) setPixmap(QPixmap("/auto_home/fboucher/WAH_Maker/images/LevelDesign/25.png"));
    squash = index;
}

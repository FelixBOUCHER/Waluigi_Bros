#include "level.h"
#include "level_block.h"
#include <QDebug>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <cmath>
#include <QPixmap>
#include <unistd.h>

Level::Level(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{

}

Level::~Level()
{

}

void Level::Load(char *filename)
{
    string line;
    int value;
    int hauteur;
    int largeur;
    ifstream myfile(filename);

        if (myfile.is_open())
        {
            myfile >> largeur;
            myfile >> hauteur;
            cerr << "L : " << largeur << endl;
            cerr << "H : " << hauteur << endl;
            int Tableau[largeur][hauteur];

            for(int i = 0; i < hauteur; i++)
            {
                for(int j = 0; j < largeur; j++)
                {
                    cerr << "Start !" << endl;
                    myfile >> Tableau[j][i];
                    cerr << "Envoi : " << j << " " << i << " : " << Tableau[j][i] << endl;
                    Build(j, i, Tableau[j][i]);
                }
            }
            myfile.close();
        }
}


void Level::Build(int largeur, int hauteur, int index)
{
    levelblock * BLOCK = new levelblock(index, largeur, hauteur);
    scene()->addItem(BLOCK);
}

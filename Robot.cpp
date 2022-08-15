/**
 * @Author: rahaingomanana <laurent>
 * @Date:   2020-05-07T19:19:42+02:00
 * @Email:  laurent.rahaingomanana@estaca.eu
 * @Filename: libRobot.cpp
 * @Last modified by:   laurent
 * @Last modified time: 2020-06-19T18:51:16+02:00
 */

#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include "Robot.h"

Robot::Robot(Monde *m, pointsCard orientation)
{
	this->world = m;
	this->orientation = orientation;
	this->nbCase = 0;
	this->position = getPosPorte();
	this->possedeTresor = false;
	PositionnerRobot(*m, this->position);
	time = 0;
}

coordonnees Robot::getPosPorte()
{
	coordonnees position;

	for(int i=0; i<world->horizontal; i++)
		for(int j=0; j<world->vertical; j++)
			if(world->tableau[i][j].porte)
			{
				position.y = i;
				position.x = j;
			}

	return(position);
}

void Robot::PositionnerRobot(Monde& m, coordonnees newPos)
{
	m.tableau[position.y][position.x].robot = false;
	position = newPos;
	m.tableau[position.y][position.x].robot = true;
}

bool Robot::avancer()
{
	coordonnees newPos = position;

	switch(orientation)
	{
		case nord:
			newPos.y--;
			if(world->tableau[position.y][position.x].murNord) return(false);
			break;
		case sud:
			newPos.y++;
			if(world->tableau[position.y][position.x].murSud) return(false);
			break;
		case est:
			newPos.x++;
			if(world->tableau[position.y][position.x].murEst) return(false);
			break;
		case ouest:
			newPos.x--;
			if(world->tableau[position.y][position.x].murOuest) return(false);
			break;
	}
	PositionnerRobot(*world, newPos);
	chemin.push_back(orientation); //ajoute à la liste des chemins empruntés
	nbCase++;
	supprimeDemiTour(); //supprime de la liste si demiTour
	world->afficher();
	return(true);
}

void Robot::turnRight()
{
	orientation = pointsCard((orientation+1)%4);
}

void Robot::turnLeft()
{
	orientation = pointsCard((orientation+3)%4);
}

void Robot::recupererTresor()
{
	world->tableau[position.y][position.x].tresor = false;
	possedeTresor = true;
}

bool Robot::rightIsClear()
{
	switch(orientation)
	{
		case est:
			if(world->tableau[position.y][position.x].murSud) return(false);
			break;
		case ouest:
			if(world->tableau[position.y][position.x].murNord) return(false);
			break;
		case nord:
			if(world->tableau[position.y][position.x].murEst) return(false);
			break;
		case sud:
			if(world->tableau[position.y][position.x].murOuest) return(false);
			break;
	}
	return(true);
}

void Robot::supprimeDemiTour()
{
	clock_t tStart = clock();
	if(nbCase>1)
		if(chemin[nbCase-2] == pointsCard((chemin[nbCase-1]+2)%4)) //si le dernier changement de direction correspond à 180°
		{
			chemin.pop_back();
			chemin.pop_back();
			nbCase-=2;
		}
	// if(chemin.size()>1)
	// 	if(chemin[chemin.size()-2] == pointsCard((chemin[chemin.size()-1]+2)%4)) //si le dernier changement de direction correspond à 180°
	// 	{
	// 		chemin.pop_back();
	// 		chemin.pop_back();
	// 		nbCase-=2;
	// 	}
	time += clock() - tStart;
}

bool Robot::lancerLaMission()
{
	world->afficher();
	while(!possedeTresor)
	{
		if(world->tableau[position.y][position.x].tresor)
			recupererTresor();

		else if(rightIsClear())
		{
			turnRight();
			avancer();
		}
		else
		{
			if(!avancer())
			{
				turnLeft();
				if(!avancer())
				{
					turnLeft();
					avancer();
				}
			}
		}
	}
	retournerDep();
	sortir();
	return(true);
}

float Robot::getTime()
{
	return(time);
}

void Robot::retournerDep()
{
	int i = nbCase;

	while(i-->0)
	{
		orientation = pointsCard((chemin[i]+2)%4);
		avancer();
	}
}

void Robot::sortir()
{
	if(world->tableau[position.y][position.x].porte && possedeTresor)
		cout << "\n\nmission reussie\n\n";
}

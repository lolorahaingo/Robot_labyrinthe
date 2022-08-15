/**
 * @Author: rahaingomanana <laurent>
 * @Date:   2020-05-07T19:19:43+02:00
 * @Email:  laurent.rahaingomanana@estaca.eu
 * @Filename: libRobot.h
 * @Last modified by:   laurent
 * @Last modified time: 2020-06-19T18:34:57+02:00
 */

#ifndef ROBOT_H
#define ROBOT_H
#include "Monde.h"
#include <vector>

using namespace std;


enum pointsCard { est, sud , ouest, nord };

struct coordonnees
{
	float x;
	float y;
};

class Robot
{

private:
	Monde *world; //pointeur sur le monde donné
	bool possedeTresor;
	vector<pointsCard> chemin; //historique des cases à reprendre pour sortir
	int nbCase; //nombre de case dans le tableau chemin
	coordonnees position;
	pointsCard orientation;
	float time;

public:
	Robot(Monde *m, pointsCard orientation=nord);

	coordonnees getPosPorte();
	void PositionnerRobot(Monde& m, coordonnees newPos);
	bool avancer(); //faux si un mur bloque vrai sinon //
	bool rightIsClear(); //regarde s'il y a un mur à droite
	void turnRight(); //ALIX
	void turnLeft();  //ALIX
	void supprimeDemiTour(); //supprime les demiTour dans le tableau chemin
	void retournerDep();
	void recupererTresor();
	bool lancerLaMission();
	void sortir();
	float getTime();
};

#endif

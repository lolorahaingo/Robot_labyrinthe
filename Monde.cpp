/**
 * @Author: rahaingomanana <laurent>
 * @Date:   2020-04-23T12:08:56+02:00
 * @Email:  laurent.rahaingomanana@estaca.eu
 * @Filename: Monde.cpp
 * @Last modified by:   laurent
 * @Last modified time: 2020-06-13T00:11:30+02:00
 */


#include "Monde.h"

#include <iostream>
#include <cstdlib>

using namespace std;

Monde::Monde()
{
    initTableau(5,5);
}

Monde::Monde(int numero)
{
    switch (numero)
    {
    case 1:
        initTableau(10,10);
        tableau[4][5].tresor = true;
        tableau[2][8].robot = true;
        tableau[2][8].porte = true;
        tableau[1][5].murNord = true;
        tableau[1][5].murOuest = true;
        for (int i = 1; i < 5; i++)
            tableau[i][5].murEst = true;
        tableau[3][5].murOuest = true;
        tableau[4][5].murOuest = true;
        tableau[4][5].murSud = true;
        for (int i = 2; i < 5; i++) {
            tableau[2][i].murNord = true;
            tableau[2][i].murSud = true;
        }
        tableau[2][8].murNord = true;
        for (int i = 2; i < 7; i++) {
            tableau[i][8].murEst = true;
            tableau[i][8].murOuest = true;
        }
        tableau[7][8].murEst = true;
        tableau[8][8].murEst = true;
        tableau[8][8].murOuest = true;
        tableau[8][8].murSud = true;
        for (int i = 2; i < 4; i++) {
            tableau[7][i].murNord = true;
            tableau[7][i].murSud = true;
        }
        for (int i = 5; i < 8; i++) {
            tableau[7][i].murNord = true;
            tableau[7][i].murSud = true;
        }
        tableau[7][4].murNord = true;
        for (int i = 3; i < 7; i++) {
            tableau[i][1].murEst = true;
            tableau[i][1].murOuest = true;
        }
        tableau[2][1].murOuest = true;
        tableau[1][1].murOuest = true;
        tableau[1][1].murEst = true;
        tableau[1][1].murNord = true;
        tableau[7][1].murOuest = true;
        tableau[7][1].murSud = true;
        for (int i = 8; i < 10; i++) {
            tableau[i][4].murEst = true;
            tableau[i][4].murOuest = true;
        }
        break;
    case (2):
        initTableau(11,11);
        tableau[1][9].tresor = true;
        tableau[6][5].robot = true;
        tableau[6][5].porte = true;
        tableau[10][5].murEst = true;
        tableau[10][5].murOuest = true;
        tableau[9][5].murNord = true;
        tableau[9][1].murOuest = true;
        tableau[9][1].murSud = true;
        tableau[1][1].murOuest = true;
        tableau[1][1].murNord = true;
        tableau[1][2].murNord = true;
        tableau[1][2].murSud = true;
        tableau[1][3].murNord = true;
        tableau[1][9].murNord = true;
        tableau[1][9].murEst = true;
        tableau[2][9].murOuest = true;
        tableau[2][9].murEst = true;
        tableau[2][9].murSud = true;
        tableau[2][3].murEst = true;
        tableau[2][3].murOuest = true;
        tableau[3][3].murOuest = true;
        tableau[3][5].murEst = true;
        tableau[3][7].murEst = true;
        tableau[3][7].murOuest = true;
        tableau[3][7].murNord = true;
        tableau[4][7].murOuest = true;
        tableau[7][3].murSud = true;
        tableau[6][5].murNord = true;
        tableau[6][5].murEst = true;
        tableau[7][6].murNord = true;
        tableau[7][7].murEst = true;
        tableau[4][8].murNord = true;
        tableau[4][8].murSud = true;
        tableau[4][9].murNord = true;
        tableau[4][9].murEst = true;
        tableau[9][9].murSud = true;
        tableau[9][9].murEst = true;
        for (int i = 5; i < 8; i++)
            tableau[7][i].murSud = true;
        for (int i = 6; i < 8; i++)
            tableau[i][5].murOuest = true;

        for (int i = 2; i < 5; i++) {
            tableau[9][i].murNord = true;
            tableau[9][i].murSud = true;
        }
        for (int i = 6; i < 9; i++) {
            tableau[9][i].murNord = true;
            tableau[9][i].murSud = true;
        }
        for (int i = 4; i < 9; i++) {
            tableau[1][i].murNord = true;
            tableau[1][i].murSud = true;
        }
        for (int i = 4; i < 6; i++) {
            tableau[3][i].murNord = true;
            tableau[3][i].murSud = true;
        }
        for (int i = 2; i < 9; i++) {
            tableau[i][1].murEst = true;
            tableau[i][1].murOuest = true;
        }
        for (int i = 4; i < 8; i++) {
            tableau[i][3].murEst = true;
            tableau[i][3].murOuest = true;
        }
        for (int i = 5; i < 7; i++) {
            tableau[i][7].murEst = true;
            tableau[i][7].murOuest = true;
        }
        for (int i = 5; i < 9; i++) {
            tableau[i][9].murEst = true;
            tableau[i][9].murOuest = true;
        }
        break;
    case (3):
        initTableau(11,11);
        tableau[7][3].tresor = true;
        tableau[10][5].robot = true;
        tableau[10][5].porte = true;
        tableau[10][5].murEst = true;
        tableau[10][5].murOuest = true;
        tableau[9][5].murNord = true;
        tableau[9][1].murOuest = true;
        tableau[9][1].murSud = true;
        tableau[1][1].murOuest = true;
        tableau[1][1].murNord = true;
        tableau[1][2].murNord = true;
        tableau[1][2].murSud = true;
        tableau[1][3].murNord = true;
        tableau[1][9].murNord = true;
        tableau[1][9].murEst = true;
        tableau[2][9].murOuest = true;
        tableau[2][9].murEst = true;
        tableau[2][9].murSud = true;
        tableau[2][3].murEst = true;
        tableau[2][3].murOuest = true;
        tableau[3][3].murOuest = true;
        tableau[3][5].murEst = true;
        tableau[3][7].murEst = true;
        tableau[3][7].murOuest = true;
        tableau[3][7].murNord = true;
        tableau[4][7].murOuest = true;
        tableau[7][3].murSud = true;
        tableau[6][5].murNord = true;
        tableau[6][5].murEst = true;
        tableau[7][6].murNord = true;
        tableau[7][7].murEst = true;
        tableau[4][8].murNord = true;
        tableau[4][8].murSud = true;
        tableau[4][9].murNord = true;
        tableau[4][9].murEst = true;
        tableau[9][9].murSud = true;
        tableau[9][9].murEst = true;
        for (int i = 5; i < 8; i++)
            tableau[7][i].murSud = true;
        for (int i = 6; i < 8; i++)
            tableau[i][5].murOuest = true;

        for (int i = 2; i < 5; i++) {
            tableau[9][i].murNord = true;
            tableau[9][i].murSud = true;
        }
        for (int i = 6; i < 9; i++) {
            tableau[9][i].murNord = true;
            tableau[9][i].murSud = true;
        }
        for (int i = 4; i < 9; i++) {
            tableau[1][i].murNord = true;
            tableau[1][i].murSud = true;
        }
        for (int i = 4; i < 6; i++) {
            tableau[3][i].murNord = true;
            tableau[3][i].murSud = true;
        }
        for (int i = 2; i < 9; i++) {
            tableau[i][1].murEst = true;
            tableau[i][1].murOuest = true;
        }
        for (int i = 4; i < 8; i++) {
            tableau[i][3].murEst = true;
            tableau[i][3].murOuest = true;
        }
        for (int i = 5; i < 7; i++) {
            tableau[i][7].murEst = true;
            tableau[i][7].murOuest = true;
        }
        for (int i = 5; i < 9; i++) {
            tableau[i][9].murEst = true;
            tableau[i][9].murOuest = true;
        }
        break;
    default:
        // TODO
        initTableau(11,11);
        tableau[6][5].tresor = true;
        tableau[10][5].robot = true;
        tableau[10][5].porte = true;
        tableau[10][5].murEst = true;
        tableau[10][5].murOuest = true;
        tableau[9][5].murNord = true;
        tableau[9][1].murOuest = true;
        tableau[9][1].murSud = true;
        tableau[1][1].murOuest = true;
        tableau[1][1].murNord = true;
        tableau[1][2].murNord = true;
        tableau[1][2].murSud = true;
        tableau[1][3].murNord = true;
        tableau[1][9].murNord = true;
        tableau[1][9].murEst = true;
        tableau[2][9].murOuest = true;
        tableau[2][9].murEst = true;
        tableau[2][9].murSud = true;
        tableau[2][3].murEst = true;
        tableau[2][3].murOuest = true;
        tableau[3][3].murOuest = true;
        tableau[3][5].murEst = true;
        tableau[3][7].murEst = true;
        tableau[3][7].murOuest = true;
        tableau[3][7].murNord = true;
        tableau[4][7].murOuest = true;
        tableau[7][3].murSud = true;
        tableau[6][5].murNord = true;
        tableau[6][5].murEst = true;
        tableau[7][6].murNord = true;
        tableau[7][7].murEst = true;
        tableau[4][8].murNord = true;
        tableau[4][8].murSud = true;
        tableau[4][9].murNord = true;
        tableau[4][9].murEst = true;
        tableau[9][9].murSud = true;
        tableau[9][9].murEst = true;
        for (int i = 5; i < 8; i++)
            tableau[7][i].murSud = true;
        for (int i = 6; i < 8; i++)
            tableau[i][5].murOuest = true;

        for (int i = 2; i < 5; i++) {
            tableau[9][i].murNord = true;
            tableau[9][i].murSud = true;
        }
        for (int i = 6; i < 9; i++) {
            tableau[9][i].murNord = true;
            tableau[9][i].murSud = true;
        }
        for (int i = 4; i < 9; i++) {
            tableau[1][i].murNord = true;
            tableau[1][i].murSud = true;
        }
        for (int i = 4; i < 6; i++) {
            tableau[3][i].murNord = true;
            tableau[3][i].murSud = true;
        }
        for (int i = 2; i < 9; i++) {
            tableau[i][1].murEst = true;
            tableau[i][1].murOuest = true;
        }
        for (int i = 4; i < 8; i++) {
            tableau[i][3].murEst = true;
            tableau[i][3].murOuest = true;
        }
        for (int i = 5; i < 7; i++) {
            tableau[i][7].murEst = true;
            tableau[i][7].murOuest = true;
        }
        for (int i = 5; i < 9; i++) {
            tableau[i][9].murEst = true;
            tableau[i][9].murOuest = true;
        }
        break;
    }
}

void Monde::initTableau(int h, int v)
{
    horizontal = h;
    vertical = v;
    place p;
    p.murEst = false;
    p.murNord = false;
    p.murOuest = false;
    p.murSud = false;
    p.tresor = false;
    p.porte = false;
    p.robot=false;

        //ajout de place dans le monde
    for (int i = 0; i < vertical; i++) //pour chaque ligne
    {
        vector<place> bande;
        for (int j = 0; j < horizontal; j++)
        {
            bande.push_back(p);
        }
        tableau.push_back(bande); //on ajoute un vecteur de taille m.horizontal elements
    }

    //ajout des murs dans le monde
    for (int i = 0; i < horizontal; i++)
    {
        tableau[0][i].murNord = true; //les murs en haut sur la premi�re ligne
        tableau[vertical - 1][i].murSud = true;  //les murs en bas sur la derniere ligne
    }

    //ajout des murs dans le monde
    for (int i = 0; i < vertical; i++)
    {
        tableau[i][0].murOuest = true;
        tableau[i][horizontal - 1].murEst = true;
    }
}

void Monde::afficher()
{
#ifdef _WIN32
   system("cls");
#else
    system("clear");
#endif
	cout << endl;

	//premier passage pour la ligne du dessus
	for (int j = 0; j < horizontal; j++)
	{
		if (tableau[0][j].murNord == true)
			cout << " ___";
		else
			cout << "    ";
	}
	cout << endl;

	for (int i = 0; i < vertical; i++) //pour chaque ligne
	{
		//premier passage pour les lignes horizontales
		for (int j = 0; j < horizontal; j++)
		{
			if (tableau[i][j].murOuest || (j>0 && tableau[i][j-1].murEst== true))
				cout << "|";
			else
				cout << " ";
			if (tableau[i][j].robot == true)
				cout << " R ";
			else if (tableau[i][j].tresor == true)
			    cout << " * ";
			else if (tableau[i][j].porte == true)
			    cout << " H ";
            else
				cout << " . ";
           //if (m.tableau[i][j].murEst == true) cout << "|";
         //  else cout << "  ";
		}
		//on ferme � droite
		if (tableau[i][horizontal - 1].murEst == true)
			cout << "|";
		cout << endl;
		// second passage pour les lignes verticales
		for (int j = 0; j < horizontal; j++)
		{
			if (tableau[i][j].murOuest || (j>0 && tableau[i][j-1].murEst== true))
				cout << "|";
			else
				cout << " ";;
			if (tableau[i][j].murSud == true || (i<vertical-1 && tableau[i+1][j].murNord== true))
				cout << "___";
			else
				cout << "   ";
		}
		//on ferme � droite
		if (tableau[i][horizontal-1].murEst == true)
			cout << "|" ;
		cout << endl;

	}

	cout << endl;
#ifdef _WIN32
    system("PAUSE");
#else
    system( "read -n 1 -s -p \"Press any key to continue...\"" );
#endif
}

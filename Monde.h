/**
 * @Author: rahaingomanana <laurent>
 * @Date:   2020-04-23T11:10:40+02:00
 * @Email:  laurent.rahaingomanana@estaca.eu
 * @Filename: Monde.h
 * @Last modified by:   laurent
 * @Last modified time: 2020-05-08T14:37:00+02:00
 */



#ifndef MONDE_H
#define MONDE_H

#include <vector>


struct place
{
	bool tresor;
	bool murOuest;
	bool murEst;
	bool murNord;
	bool murSud;
	bool robot; // pr�sence ou non du robot ramasseur
	bool porte;
};

class Monde
{
    public:
        Monde();
        Monde(int numero);
        void afficher();
        friend class Robot;
    protected:

    private:
        void initTableau(int h, int v);
        int horizontal;
        int vertical;
        std::vector<std::vector<place> > tableau;
};

#endif // MONDE_H

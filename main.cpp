/**
 * @Author: rahaingomanana <laurent>
 * @Date:   2020-04-23T11:49:20+02:00
 * @Email:  laurent.rahaingomanana@estaca.eu
 * @Filename: main.cpp
 * @Last modified by:   laurent
 * @Last modified time: 2020-06-19T19:38:53+02:00
 */



#include <iostream>

#include "Monde.h"
#include "Robot.h"

#define I 1000000
#define T 1000000
using namespace std;

int main()
{
    Monde monde(3);
    Robot robot(&monde);

    robot.lancerLaMission();
    return(0);
}

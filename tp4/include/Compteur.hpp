#ifdef COMPTEUR_HPP
#define COMPTEUR_HPP
#include <iostream>
#include "obstacle.hpp"
#include "Compteur.hpp"


class Compteur: public Obstacle{

    int data;
    public: 

        int increment();
}

#endif

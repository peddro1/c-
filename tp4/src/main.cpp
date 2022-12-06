#include "Plank.cpp"
#include "Clou.cpp"
#include "Compteur.cpp"
#include "Lanceur.cpp"
#include "obstacle.cpp"
#include <iostream>

int main(){
    int n = 6;
    
    Compteur comp1;

    Obstacle o;

    Clou c(1);

    c.addClou(new Clou(1), new Clou(2));
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            
        }
        printf("\n");
    }

    Plank p(5);
    return 0;

}

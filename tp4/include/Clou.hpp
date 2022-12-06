#ifdef CLOU_HPP
#define CLOU_HPP
#include <iostream>

// class Obstacle: declaration antecipé

class Clou:public Obstacle{
    private:
        int key;
        Clou *left, *right;

    public:
        void addClou(Clou c, Clou right, Clou left);
        Clou(int key);
};

#endif

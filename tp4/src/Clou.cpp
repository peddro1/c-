#include "Clou.hpp"

Clou::Clou(int key){
    key = key;
    left = right = nullptr;
}

void Clou::addClou( Clou right, Clou left){
    this->right = right;
    this->left = left;
}
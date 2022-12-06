#include "iterators.hpp"

vector<int> random_vector(){

    vector<int> myvector;

    for(int i = 0; i < 40; i++){
        myvector.push_back(rand()%20);
    }

    cout << "vector contains";
    print_elements(myvector.begin(), myvector.end());
        
    return myvector;
}

set<int> random_set(){
    set<int> myset;

    for(int i = 0; i < 1000; i++){
        myset.insert(rand()%20);
    }

    cout << "set contains";
    print_elements(myset.begin(), myset.end());

    return myset;
}

// Q1: En fait, on peut voir que le vector est désordonné et il a la taille de 40.
//     Mais pour le set, les numeros sont ordonnés et la taille est 21, parce que on ne
//     peut pas avoir la repetition des elements dans un set. 
// 
// 
// Q2: Parce que il a l'idée d'un ensemble d'elements pour le (multi)set et le 
//     (multi)map. Il n'y a pas la meme chose pour les vectors. Et c'est plus facilé
//     de trouver un element, par exemple, quand le ensemble est ordonné.
// 
// D - error: iterators.cpp:82:22: error: no member named 'begin' in 'std::stack<int>' 
//            iterators.cpp:82:33: error: no member named 'end' in 'std::stack<int>'
// 

template<typename I>
void print_elements(I beg, I end){
    while(beg != end){
        cout << ' ' << *beg;
        ++beg;
    } 
    cout << "\n";
}

template<typename I>
void print_map(I beg, I end){
    while(beg != end){
        cout << beg->first << ' ' << beg->second << "\n";
        ++beg;
    }
}

// ERROR
// void test_stack(){
//     stack<int> s;
//     for(int i = 0; i < 40; i++){
//         s.push(rand()%20);
//     }
//     print_elements(s.begin(), s.end());
// }

// Q3: On peut voir que le vector change sa taille e sa capacité à chaque fois qu'un
//     nouvel élément est ajouté. 
//     
//     La taille est toujours le numéro de la dernier position du vector + 1, mais la capacité
//     est beaucoup plus grande.
//
//     size: 0
//     capacity: 0
//     size: 5000
//     capacity: 8192


void vector_capacity(){
    vector<double> vd;
    cout << "size: " << vd.size() << "\n";
    cout << "capacity: " <<  vd.capacity() << "\n";
    for(int i = 0; i< 5000; i++){
        vd.push_back(i/5000);
    }
    cout << "size: " << vd.size() << "\n";
    cout << "capacity: " <<  vd.capacity() << "\n";
}

vector<int> copy_vector(vector<int> vec){

    vector<int> vec_return;
    priority_queue<int> queue;

    for(unsigned long i = 0;  i < vec.size(); i++){
        queue.push(vec[i]);
    }
    while(!queue.empty()){
        vec_return.push_back(queue.top());
        queue.pop();
    }
    return vec_return;

}

void map_test(){
    map<string, int> map_table;
    map_table["Pedro"] = 23;
    map_table["Carlos"] = 25;
    map_table["Marjory"] = 18;
    print_map(map_table.begin(), map_table.end());
}

// Q4: Cette fonction less<string> est utilisé pour verifier si la première string est avant de l'autre selon
//     l'order alphabétique. Si oui elle reviendra true, si non elle reviendra false
//


template<typename A, typename B, typename U >
bool check_less(A a, B b, U u){
    return u(a, b);
}

// Q5: L'utilité du make_pair est que on peut faire un ensemble de valeurs qui s'appelle pair.
//     Le pair est un type specifique de tuple en c++; Pour la comparaison on va verifier
//     si le premier nombre du premier pair est plus petit que le premier nombre du deuxieme pair. 
//     Si les valeurs sont égaux, il faut utiliser la meme logique pour le deuxiemes nombres. 
//

void make_pairs(){
    cout << boolalpha;
    cout << "make_pair(1, 10) < make_pair(2, 3): " << (make_pair(1, 10) < make_pair(2, 3)) << "\n"; 
    cout << "make_pair(1, 10) < make_pair(1, 20): " << (make_pair(1, 10) < make_pair(1, 20)) << "\n"; 
    cout << "make_pair(1, 10) < make_pair(2, 5): " << (make_pair(1, 10) < make_pair(2, 5)) << "\n"; 
    cout << "make_pair(1, 10) < make_pair(0, 8.5): " << (make_pair(1, 10.0) < make_pair(0, 8.5)) << "\n"; 
    cout << "make_pair(0, 0) != make_pair(0, 8): " << (make_pair(0, 0) != make_pair(0, 8)) << "\n";
    cout << "make_pair(0, 5) > make_pair(0, 5): " << (make_pair(0, 5) > make_pair(0, 5)) << "\n"; 
    cout << "make_pair(pomme, 10) < make_pair(tomate, 40): " << (make_pair("pomme", 10) < make_pair("tomate", 40)) << "\n" << endl;
     
}

// Q6: Operateur[]: À access or insert specified element. 
//     Quand on utilise l'operateur [] il va donner un valeur pour un element du map ou acceder à cette valeur. 
//     Dans ce cas, on peut voir qu'il va specifier un valeur pour la position 0 du map quand la comparation 
//     es eppellé et le standart est 0.0. C'est la raison pour laquelle le test est vrai et la taille est 3;

void operateur(){
    map<int,double> tab; 
    tab[10] = 5.0;
    tab[5] = 2.5;
    if (tab[0] == 0.0) {
        cout << tab.size() << endl; 
    }
}

// template<typename I>
// void tes(I beg1, I end1, I beg2, I end2 ){

//     // vector<int> check;
//     // while(beg2 != end2){
//     //     while(beg1 != end1){
//     //         //if(*beg2 == *beg1) 
//     //         check.push_back(1);
//     //         ++beg1;
//     //     }
//     //     // cout << ' ' << *beg2;
//     //     ++beg2;
//     // } 
//     // cout << beg1 << "\n";
//     // cout << check.size() << "\n";
//     // if(beg1 == check.size()){
//     //     return true;
//     // }
//     //return false;
    
// }

template <typename J>
void teste(J beg ){
    //int value = *beg;
    cout << "ff";
}



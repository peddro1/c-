#include "iterators.hpp"

int main(){
    set<int> test;
    test.insert(1);
    vector<int> v = random_vector();
    set<int> s = random_set();
    //test_stack();
    vector_capacity();

    vector<int> copy = copy_vector(v);
    cout << "priority queue: ";
    print_elements(copy.begin(), copy.end());
   
    map_test();
    //cout << boolalpha;
    // cout << check_less("Carlos", "Pedro") << '\n';
    // cout << check_less("Pedro", "Carlos") << '\n';

    operateur();
    make_pairs();

    //teste(copy.begin());
    return 0;
}
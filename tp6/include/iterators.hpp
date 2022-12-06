#ifndef ITERATORS_HPP
#define ITERATORS_HPP
#include <iostream>
#include <string.h>
#include <cmath>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <functional>
#include <algorithm>
using namespace std;

vector<int> random_vector();
set<int> random_set();
template<typename I>
void print_elements(I beg, I end);
void vector_capacity();
template<typename I>
void print_map(I beg, I end);
void vector_capacity();
vector<int> copy_vector(vector<int> vec);
void map_test();
template<typename A, typename B, typename U = less<string> >
bool check_less(A a, B b, U u = U());
void make_pairs();
void operateur();
template <typename J>
void teste(J beg );

// template<typename I>
// void tes(I beg1, I end1, I beg2, I end2);


#endif
/* pairs:- a class in c++ stl which store two values

using pairs we can make the pair of two data types and two containers

syntax:- pair<int,string> p;  so here, p is a variable and we create the pair of int and string.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, string> p;
    // p = make_pair(2, "mitu");  first way to initialize
    p = {2, "mitu"};   // another way to initialize
    cout << p.first << " " << p.second << endl;

    int a[] = {1,2,3,4};
    int b[] = {5,6,7,8};
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {4, 5};
    for(int i=0; i<3; i++){
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    swap(p_array[0], p_array[2]);

    cout << endl;
    for(int i=0; i<3; i++){
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
}
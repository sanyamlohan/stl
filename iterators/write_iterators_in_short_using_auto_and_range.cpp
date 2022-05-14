#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {0,1,2,3,4,5,6,7};
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int> :: iterator it = v.begin();
    cout << (*it) << endl;
    cout << (*(it+1)) << endl;

    for(it = v.begin(); it != v.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;

    for(int value : v){                      // range based loop
        cout << value << " ";
    }
    cout << endl;


    vector<pair<int, int>> v_p = {{1,2}, {2,3}, {4,5}};
    for(pair<int, int> value : v_p){
        cout << value.first << " " << value.second << endl;
    }

    // auto keyword
    for(auto value : v_p){
        cout << value.first << " " << value.second << endl;
    }

}

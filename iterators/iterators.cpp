// iterator:- point to the element of container
// it.begin():- point to v[0]
// it.end():- point next to the last element

//syntax:- vector<int> :: iterator it;

// it++ :- move to next iterator
// it+1 :- move to next location
// it work same in contiguous but in non-contiguous likes map and set there it++ wil work

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


    vector<pair<int, int>> v_p = {{1,2}, {2,3}, {3,4}};
    vector<pair<int, int>> :: iterator it1;
    for(it1 = v_p.begin(); it1 != v_p.end(); it1++){
        cout << it1->first << " " << it1->second << endl;    //(*it).second = it->second;
    }

}
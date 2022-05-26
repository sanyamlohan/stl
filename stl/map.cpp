// map store key and value like this:- 1   abc
                                //     2   bcd
                                //     3   def

// we can't do it+1 because it is not contiguous
// we can do it++ int it.

// normal map print in sorted order

#include<bits/stdc++.h>
using namespace std;

int main(){
    map <int, string> m;

    m[1] = "sanyam";
    m[5] = "Sumit";
    m[10] = "Milan";

    m.insert({2, "mukul"});

    map <int, string> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }

    cout << m[2] << endl;
    m[2] = "sam";
    cout << m[2] << endl;
}
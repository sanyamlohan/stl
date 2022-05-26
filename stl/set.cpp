// set store unique elements. output come in sorted order
// insert, find, erase, count:- O(logn)

#include<bits/stdc++.h>
using namespace std;

int main(){
    set <int> s;

    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(5);

    for(int value : s){
        cout << value << " ";
    }
    cout << endl;

    set <int> :: iterator it = s.begin();
    it++;

    s.erase(it);

    for(int value : s){
        cout << value << " ";
    }
    cout << endl;

    cout << "5 is present or not: " << s.count(5) << endl;

    set <int> :: iterator itr = s.find(5);
    for(it = itr; it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
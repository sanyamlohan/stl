// list is just like a doubly linked list. we can do the insertion an deletion from both end.
// but we can't access the element using .at(). we have to traverse to print the element

#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;

    l.push_back(2);
    l.push_back(3);
    l.push_front(1);
    l.push_front(0);

    for(int value: l){
        cout << value << " ";
    }
    cout << endl;

    cout << "size: " << l.size() << endl;
    l.erase(l.begin(), --l.end());
    for(int value: l){
        cout << value << " ";
    }
    cout << endl;

    l.push_front(2);
    l.push_front(1);
    for(int value: l){
        cout << value << " ";
    }
    cout << endl;

    l.pop_front();
    l.pop_back();
    for(int value: l){
        cout << value << " ";
    }
    cout << endl;
    
}
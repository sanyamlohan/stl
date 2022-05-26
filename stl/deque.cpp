/* Deque or Double Ended Queue is a type of queue 
in which insertion and removal of elements 
can either be performed from the front or the rear. 
Thus, it does not follow FIFO rule (First In First Out). */


#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(2);
    d.push_back(5);
    d.push_front(3);
    d.push_front(1);

    for(int value : d){
        cout << value << " ";
    }
    cout << endl;

    d.pop_front();
    for(int value : d){
        cout << value << " ";
    }
    cout << endl;

    cout << "size: " << d.size() << endl;

    d.pop_back();
    for(int value : d){
        cout << value << " ";
    }
    cout << endl;

    cout << "first index element: " << d.at(1) << endl;

    cout << "front element: " << d.front() << endl;
    cout << "last element: " << d.back() << endl;

    cout << "before erase size is: " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    cout << "after erase size is: " << d.size() << endl;

    return 0;
}

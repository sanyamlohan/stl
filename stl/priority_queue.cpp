/* designed such that the first element of the queue
is the greatest of all elements in the queue 
and elements are in nonincreasing order */

#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue <int> p;    // by default it is max heap

    p.push(5);
    p.push(18);
    p.push(4);
    p.push(21);
    p.push(17);

    int size = p.size();
    for(int i=0; i<size; i++){
        cout << p.top() << " ";
        p.pop();
    }                                // while print max element print first then 2nd max element
    cout << endl;

    cout << "empty or not: " << p.empty() << endl;




    priority_queue <int, vector<int>, greater<int> > p1;    // min heap
    p1.push(5);
    p1.push(18);
    p1.push(4);
    p1.push(21);
    p1.push(17);

    int size1 = p1.size();
    for(int i=0; i<size1; i++){
        cout << p1.top() << " ";
        p1.pop();
    }                                // while print min element print first then 2nd min element
    cout << endl;

    cout << "empty or not: " << p1.empty() << endl;

}
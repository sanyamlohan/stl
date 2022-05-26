#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;

    q.push("sanyam");
    q.push("sumit");
    q.push("milan");

    cout << "size before pop: " << q.size() << endl;
    cout << "front elements: " << q.front() << endl;

    q.pop();
    cout << "front elements: " << q.front() << endl;

    cout << "size after pop: " << q.size() << endl;

    return 0;
}
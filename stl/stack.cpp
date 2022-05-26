//stack:-   FILO or LIFO

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<string> s;

    s.push("sanyam");
    s.push("sumit");
    s.push("milan");
    s.push("mukul");
    cout << "top element: " << s.top() << endl;

    s.pop();
    cout << "top element: " << s.top() << endl;

    cout << "size: " << s.size() << endl;

    cout << "empty or not: " << s.empty() << endl;


    return 0;
}
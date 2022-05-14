#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string> v){               // void printVec(vector<int> &v) -------- reference created
    cout << "elements present in vector:" << " ";
    for(int i=0; i<v.size(); i++){       //v.size() :- length of array present at that time   O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<string> v;
    int n;
    cout << "enter no. of string you want to put in array: ";
    cin >> n;

    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    printVec(v);
}
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> v){
    cout << "elements in vector are: ";
    for(int i=0; i<v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int main(){
    vector<pair<int, int>> v = {{1,2},{2,3},{3,4}};     // vector of pair
    printVec(v);
    int n;
    cout << "enter value of n: ";
    cin >> n;

    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    printVec(v);
}
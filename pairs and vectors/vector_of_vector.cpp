#include<bits/stdc++.h>
using namespace std;

void printVec(vector <int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "enter how many vectors you want to declare: ";
    cin >> n;
    vector<vector<int>> v;   // it like a 2d matrix with no. of rows fixed but no. of cols are dynamic
    for(int i=0; i<n; i++){
        int num;
        cout << "how many numbers in vector: ";
        cin >> num;

        vector<int> temp;
        for(int j=0; j<num; j++){
            int data;
            cin >> data;
            temp.push_back(data);
        }
        v.push_back(temp);
    }

    for(int i=0; i<n; i++){
        printVec(v[i]);
    }

    cout << v[1][0] << endl;   //it print 0th element of v[0]   
}
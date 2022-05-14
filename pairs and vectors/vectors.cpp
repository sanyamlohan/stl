/* vectors are similar to arrays 
    vectors:- array of dynamic sizes

    syntax:- vector<int> v;   v is array of integer type whose size is 0. 
    we can make vector of data types, pairs, containers
    because no value is stored in it
    when we enter 1 value in it its size become 1 and 
    then we enter another value then its size become 2 

    size of array declare locally is 10^5
    size of array declare globally is 10^7    and it is same in vector
*/

#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){               // void printVec(vector<int> &v) -------- reference created
    cout << "elements present in vector:" << " ";
    for(int i=0; i<v.size(); i++){       //v.size() :- length of array present at that time   O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int> v;  
    int num;
    cout << "enter no. of elements you want to store in the vector: ";
    cin >> num;

    for(int i = 0; i < num; i++){
        int data;
        cin >> data;
        v.push_back(data);  //  push_back put the data at the end of the vector   O(1)
    }
    printVec(v);

    v.pop_back();    // remove the last element    O(1)
    printVec(v);

    vector<int> v2 = v;     // copy full vector    O(n)
    printVec(v2);

}
#include <iostream>
#include<vector>
#include<algorithm>
// #include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(2);
    v.push_back(7);
    // v.at(2)=99;
    // cout<<v.at(2);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    //to sort
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

}
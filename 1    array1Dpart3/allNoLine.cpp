#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void sort1(vector<int> &v){
    int n =v.size();
    int i=0,j=n-1;
    while(i<j){
        if (v[i]<0) i++;
        else if (v[j]>0) j--;
        else {
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(-9);
    v.push_back(5);
    v.push_back(-1);
    v.push_back(10);
    v.push_back(-3);
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // sort(v.begin(),v.end());

    sort1(v);
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

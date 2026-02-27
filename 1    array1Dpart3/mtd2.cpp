#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void sort1(vector<int> &v){
    int n =v.size();
    int i=0,j=n-1;
    while (i<j){
//         while(i<j && v[i]==0) i++;
//         while(i<j && v[j]==1) j--;
//         if(i<j){
//             swap(v[i],v[j]);
//             i++;
//             j--;
//         }
//     }
// }

        if (v[j]==1) j--;
        else if (v[i]==0) i++;
        else{
             swap(v[i],v[j]);
             i++;
             j--;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
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
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(5,2);
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";

    vector < vector<int> > v(3,vector<int> (4,2));  //3*4 size ka vector 
    cout<<v.size();
    cout<<endl;
    for(int i =0; i<3 ;i++){
        for (int j=0;j<5;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v[1].size();
}
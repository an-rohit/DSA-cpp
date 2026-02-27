#include<iostream>
#include<vector>
using namespace std;
void sort1(vector<int> &v){
    int n =v.size();
    int noo=0;
    int noz=0;  //count

    for (int i=0;i<n;i++){
        if(v[i]==0) noz+=1;
        else noo+=1;
    }    
    cout<<noz<<endl<<noo<<endl;

    for(int i=0;i<n;i++){
        if (i<noz) v[i]=0;
        else v[i]=1;
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
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

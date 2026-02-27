#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; // no need to mention size // if we had done like this vector<int>v(4) we can use v[1]=4; etc
    //instering // dont use [] 


    v.push_back(1);
    //cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(10);
    //cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(18);
    //cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(8);
    // cout<<v.size()<<endl; 
    cout<<v.capacity()<<endl;  
    v.push_back(8);
    cout<<v.capacity()<<endl;
    //isse hamara array ready ho gya


    // v[0]=2;
    // v[1]=12;
    // v[2]=23;
    // v[3]=7;
    
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}
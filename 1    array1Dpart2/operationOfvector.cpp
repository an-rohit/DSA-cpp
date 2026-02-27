#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ;
    v.push_back(2);
    v.push_back(0);
    v.push_back(21);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(9);
    v.push_back(12);
    v.push_back(7);
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(52);
    v.push_back(2);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    v.pop_back();
    v.pop_back();
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
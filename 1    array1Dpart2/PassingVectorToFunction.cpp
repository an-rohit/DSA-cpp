#include <iostream>
#include<vector>
using namespace std;
void change(vector<int> &a){
    a[2]=100;
    for (int i = 0; i < a.size(); i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
    return ;
}
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(9);
    v.push_back(8);
    for (int i = 0; i < v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    change(v);

    for (int i = 0; i < v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
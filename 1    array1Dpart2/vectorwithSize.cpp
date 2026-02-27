#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v(5,6); //initial size is 5 and each element is 6
    cout<<"size :"<<v.size()<<endl;
    cout<<"capacity :"<<v.capacity()<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
#include <iostream>
#include<vector>
using namespace std;
int main() {
    // vector<int> v(5); //initial size is 5 and each element is 6
    // for (int i=0;i<5;i++){
    //     cin>>v[i];
    // }

    vector<int> v;
    for (int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"This is the vector: ";
    for (int i=0;i<5;i++){
       cout<<v[i]<<" ";
    }
    
}
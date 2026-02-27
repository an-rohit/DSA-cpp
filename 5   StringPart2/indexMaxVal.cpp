#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<string> str{"0123", "0023", "456", "00182", "940", "2901"};
    vector<int> v;
    
    for(int i =0 ;i<str.size();i++){
        v.push_back(stoi(str[i]));
    }


    int maxIndex = 0;

    for(int i = 1; i < v.size(); i++){
        if(v[i] > v[maxIndex]){
            maxIndex = i;
        }
    }   
    cout<<maxIndex;      
}
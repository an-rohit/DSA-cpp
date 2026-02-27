#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string result;
    string str  =" raghav is a maths teacher. he is a DSA is mentor as well!";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    }
    int max =0;
    int count = 1;
    for(int i=0;i<v.size();i++){   
        if(v[i]==v[i+1]){
            count++;
        }
        else{
            count =1;
        }
        if(max<count){
            max=count;
            result = v[i];
        }
    } 
    cout<<'\n'<<max<<" "<<result;
}
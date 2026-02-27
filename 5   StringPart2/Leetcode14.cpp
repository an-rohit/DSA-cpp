#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<string> strs{"flower", "flow", "flight"};
    
    sort(strs.begin(),strs.end());



    for(int i = 0; i < strs.size(); i++){
        
            cout<<strs[i]<<" ";
        
    }   
      
}
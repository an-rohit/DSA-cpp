#include<iostream>
#include<string>
using namespace std;
int main(){
     int count =0;
     string s = "ab";
     for(int i=0;s[i]!='\0';i++){
        if(s[i+1]==s[i] || s[i-1]==s[i]){
            continue;
        }
        cout<<s[i]<<endl;
        count++;
     }
     cout<<count;
}
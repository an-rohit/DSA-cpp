#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ="rohitam";
    cout<<s;  
    for(int i=0;s[i]!='\0';i++)
    {
        if(i%2==0){
            s[i]='a';
        }      
    }
    cout<<"Final String is"<<endl;
    cout<<s;
}
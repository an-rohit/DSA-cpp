//9
//C++ Assignments | Fundamentals of Programming -1  | Week 2


#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"enter character";
    cin>>ch;
    if (ch>='0' && ch<='9') cout<<"digit";
    else if(toupper(ch)>='A' && toupper(ch)<='Z') cout<<"alphabet";
    else cout<<"special character";
}



#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "rohit is a good boy";
    // int size=str.length();

    str.push_back('r');
    cout<<str;
    str.pop_back();
    cout<<str;

}
#include <iostream>
using namespace std;
int main() 
{
    // int x=4;
    // int* p=&x;
    // cout<<*p<<endl;
    // p=p+1;
    // cout<<*p;
    // int x=10;
    // int* p=&x;
    // cout<<*p<<endl;
    // (*p)--;
    // cout<<*p;
    int a=15;
    int* ptr = &a;
    int b= --*ptr;
    cout<<a<<' '<<b;
}
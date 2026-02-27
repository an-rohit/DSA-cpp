#include<iostream>
using namespace std;
int main()
{
    int x =4;
    int y =7;
    int* p2=&y;
    int* p=&x;  //int* is a typem of datatype
                //0x61ff08
                //0x61ff08
    cout<<&x<<endl;
    cout<<p<<endl<<p2;
}
#include<iostream>
using namespace std;
void find(int n,int* p1,int* p2)
{
    *p2=n%10;
    while(n>9){
        n=n/10;
    }
    *p1=n;
    return;
}

int main(){
    int n,firstdig,lastdig;
    cout<<"enter number :";
    cin>>n;
    int* p1= &firstdig;
    int* p2= &lastdig;
    find(n,p1,p2);
    cout<<firstdig<<" "<<lastdig;
}
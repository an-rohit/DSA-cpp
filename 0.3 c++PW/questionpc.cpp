#include<iostream>
using namespace std;
int fact(int x){
    int nume=1;
    for (int i=1;i<=x;i++){
        nume=nume*i;
    }
    return nume;
}
int main(){
    int n,r;
    cout<<"enter n and r"<<endl;
    cin>>n>>r;
    cout<<fact(n)/(fact(r)*fact(n-r));
}
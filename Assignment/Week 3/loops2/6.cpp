#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n ";
    cin>>n;
    int original=n;
    int sum=0;
    int reverse =0;
    while(n>0){
        int dig=n%10;
        reverse= reverse*10 + dig;
        n=n/10;
    }
    
    sum=reverse+original;
    cout<<sum;
    

}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n ";
    cin>>n;
    int sum=0;
    while(n>0){
        int dig=n%10;
        if(dig%2==0){
            sum=sum+dig;
        }
        n=n/10;
    }
    cout<<sum;
    

}
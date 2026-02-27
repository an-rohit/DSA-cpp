#include<iostream>
using namespace std;
int gcd(int a,int b){
    int x=min(a,b);
    int y=max(a,b);
    int rem;
    while(rem!=0){
        rem=b%a;
        b=a;
        a=rem;
    } 
    return b;
}
int gcd(){
    return 988;
}

int main(){
    int a,b;    
    cout<<"enter 1st and 2nd number: "<<endl;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    cout<<gcd();

}
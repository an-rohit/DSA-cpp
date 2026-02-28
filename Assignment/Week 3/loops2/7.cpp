#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            fact=fact*j;
        }
        cout<<fact<<endl;
        fact=1;
    }
    
}
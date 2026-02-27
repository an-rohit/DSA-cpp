#include<bits/stdc++.h>
using namespace std;
int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int n,num;
    cout<<"enter the value of n:\n ";
    
    cin>>n;
    for(int i=0;i<n;i++){
        num=1;
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num = num*(i-j)/(j+1);
        }
        cout<<endl;
    }
}
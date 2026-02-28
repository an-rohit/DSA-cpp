#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            while(arr[i][j]!=1 && arr[i][j]!=0) {
                cout<<"enter 1 or 0 only";
                cin>>arr[i][j];
                
            }
        }
    }
    cout<<"your array is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==1) arr[i][j]=0;
            else arr[i][j]=1;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
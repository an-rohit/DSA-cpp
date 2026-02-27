#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of square matrix : "<<endl;
    cin>>n;
    int arr[n][n];
    //taking input for array values
    for (int i=0 ;i<n ;i++){
        for( int j=0 ;j<n ;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    //transpose
    for(int i=0;i<n;i++){
        for( int j=i ;j<n ;j++){
           swap(arr[i][j],arr[j][i]);
        }
    }

    //printing values
    for (int i=0 ;i<n ;i++){
        for( int j=0 ;j<n ;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
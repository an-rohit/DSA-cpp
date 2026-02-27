#include<iostream>
using namespace std;
int main(){
    int arr[4][2];  //declaration
    
    for (int i =0 ;i<4 ; i++){      //input
        for (int j =0 ; j<2 ;j++){
            cin>>arr[i][j];
        }
    }
    for (int i =0 ;i<4 ; i++){       //output
        for (int j =0 ; j<2 ;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

} 
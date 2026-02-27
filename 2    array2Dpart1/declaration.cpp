#include<iostream>
using namespace std;
int main(){
    int arr[3][3];  //declaration
    // rows -> 3 0-2
    // col -> 3 0-2
    for (int i =0 ;i<3 ; i++){      //input
        for (int j =0 ; j<3 ;j++){
            cin>>arr[i][j];
        }
    }
    for (int i =0 ;i<3 ; i++){       //output
        for (int j =0 ; j<3 ;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

} 
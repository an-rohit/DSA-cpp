#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter row and col : ";
    cin>>x>>y;
    int arr[x][y]; 
    int min=arr[0][0];
    for (int i =0 ;i<x ; i++){      //input
        for (int j =0 ; j<y ;j++){
            cin>>arr[i][j];
        }
    }
    for (int i =0 ;i<x ; i++){       
        for (int j =0 ; j<y ;j++){
            if (min > arr[i][j]){
                min=arr[i][j];
            }
        }
        
    }
    cout<<min;

} 
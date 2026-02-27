#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter row and col : ";
    cin>>x>>y;
    int arr[x][y]; 
    int larEle=arr[0][0];
    for (int i =0 ;i<x ; i++){      //input
        for (int j =0 ; j<y ;j++){
            cin>>arr[i][j];
        }
    }
    for (int i =0 ;i<x ; i++){       
        for (int j =0 ; j<y ;j++){
            if (larEle < arr[i][j]){
                larEle=arr[i][j];
            }
        }
        
    }
    cout<<larEle;

} 
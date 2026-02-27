#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the rows and cols : ";
    cin>>x>>y;
    int arr[x][y];
    //element ki inputs
    cout<<"enter the elements :" <<endl;
    for(int i=0 ;i<x;i++){
          for(int j=0 ;j<y;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"transpose" <<endl;
    int trans[y][x];
    for (int i=0 ; i<y;i++){
        for (int j=0;j<x ;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
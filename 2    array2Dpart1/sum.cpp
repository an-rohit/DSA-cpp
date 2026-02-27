#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter row and col of 1st matrix: ";
    cin>>x>>y;
    int p,q;
    cout<<"enter row and col of 2nd matrix: ";
    cin>>p>>q;
    if (x!=p || y!=q) cout<<"cannot be sum";

    int arr1[x][y];
    cout<<"enter the elements of 1st matrix"<<endl; 
    for (int i =0 ;i<x ; i++){      //input
        for (int j =0 ; j<y ;j++){
            cin>>arr1[i][j];
        }
    }

    int arr2[p][q];
    cout<<"enter the elements of 2nd matrix"<<endl;
    for (int i =0 ;i<p ; i++){      //input
        for (int j =0 ; j<q ;j++){
            cin>>arr2[i][j];
        }
    }

    
    cout<<"sum of the matrix is : "<<endl;
    for (int i =0 ;i<x ; i++){       
        for (int j =0 ; j<y ;j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
          
        }
        cout<<endl;
        
    }
    

} 
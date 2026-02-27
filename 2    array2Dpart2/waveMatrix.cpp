#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the rows and cols of first array";
    cin>>m>>n;
    cout<<"enter elements of matrix one"<<endl;
    int mat[m][n];
    //inputs
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }    
    //printing
    cout<<"matrix is :"<<endl;
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    //wave
    cout<<"result is :"<<endl;
    int i=0;
    while(i<m){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";       
            }  
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<mat[i][j]<<" ";       
            }
        }
        i++;
    }
}
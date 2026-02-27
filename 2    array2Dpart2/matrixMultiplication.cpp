#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the rows and cols of first array";
    cin>>m>>n;
    int p,q;
    cout<<"enter the rows and cols of second array";
    cin>>p>>q;
    if (n!=p) cout<<"matrix multiplication is not possible";
    else{
        cout<<"enter elements of matrix one"<<endl;
        int mat1[m][n];
        for (int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>mat1[i][j];
            }
        }
        cout<<"enter elements of matrix two"<<endl;
        int mat2[p][q];
        for (int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>mat2[i][j];
            }
        }
        cout<<"matrix one is :"<<endl;
        for (int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<mat1[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"matrix two is :"<<endl;
        for (int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cout<<mat2[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"matrix multiplication is :"<<endl;
        int mat3[m][q];
        for (int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                mat3[i][j]=0;
                for(int k=0;k<n;k++){
                    mat3[i][j] += mat1[i][k]*mat2[k][j];
                }
            }
        }
        for (int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<mat3[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}
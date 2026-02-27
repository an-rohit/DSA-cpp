//pascal triangle
#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for (int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}

int icj(int i,int j){
    int ij=fact(i)/(fact(j)*fact(i-j));
    return ij;
}

int main(){
    int m;
    cout<<"enter m :"<<endl;
    cin>>m;
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<icj(i,j)<<" ";
        }
        cout<<endl;
    }
}
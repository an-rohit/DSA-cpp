#include<iostream>
using namespace std;
void display(int* a){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return;
}
void change(int b[]){ //int* b -> basically is a pointer
    b[1]=565;
    return;
}
int main(){
    int arr[5]={1,22,3,4,85};
    //accesing array in another function
    //updation,pass bby value/rederence?
    display(arr);
    change(arr);
    cout<<endl;
    display(arr);
}
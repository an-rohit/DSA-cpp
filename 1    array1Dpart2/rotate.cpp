#include<iostream>
using namespace std;
void reverse1(int a[],int i,int j){
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}
void display(int b[],int size){
    for(int j=0;j<size;j++){
        cout<<b[j]<<" ";
    }
}
int main(){
    //rotate an array by k non neg
    int arr[]={2,3,6,5,4,1,0,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int k;
    cout<<"enter k: ";
    cin>>k;
    reverse1(arr,0,size-1-k);
    reverse1(arr,size-k,size-1);
    reverse1(arr,0,size-1);
    cout<<"rotated: ";
    display(arr,size);
}
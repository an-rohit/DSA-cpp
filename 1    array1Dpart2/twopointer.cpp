#include<iostream>
using namespace std;

void reverse(int a[],int size){
    cout<<"reversed array is :";
    int j=size-1;
    for (int i=0;i<size/2;i++){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
}

int main(){
    //to reverse the array without using extra array
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    cout<<"reversed array is  :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    int sum=0;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"sum is :"<<sum<<endl;
}
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"aray is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int max=arr[0]; //max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<"maximum value in arry is : "<<max<<endl;
    
}
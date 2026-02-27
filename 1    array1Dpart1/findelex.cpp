#include <iostream>
using namespace std;
int main() {
    int n,x;
    cout<<"n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the x which you want to find in array : "<<endl;
    cin>>x;
    //check mark flag

    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag=true;
        }  
    }
    if (flag==true) cout<<"element found";
    else cout<<"not found";
    
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    int sum=0;
    int pastsum,row;
    int maxsum=0;

    // int sumofrow[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
            
        }
        // sumofrow[i]=sum;
        pastsum=sum;
        if (pastsum>maxsum){
            maxsum=pastsum;
            row=i;
        }
        sum=0;
    }

    cout<<"your array is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    cout<<"maxsum is "<<maxsum<<"and row is "<<row+1;
    
}
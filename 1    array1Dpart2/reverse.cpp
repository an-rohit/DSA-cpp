#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &a) {
    for (int i=0;i<a.size();i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void reverse(int i,int j,vector<int>& v){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    return;
}
int main(){
    // int n;
    // cout<<"enter the sixe of arry : ";
    // cin>>n;
    // int arr[n];
    // cout<<"enter the elements :";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"initial array is :";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"reversed array is :";
    // for(int i=n-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    display(v);
    // vector<int> v1(v.size());
    // for(int i=0;i<v1.size();i++){
    //     int j=v.size()-1-i;
    //     v1[i]=v[j];
    // }
    reverse(1,3,v);     //reverse part
    // reverse(v.begin(),v.end());
    display(v);
}
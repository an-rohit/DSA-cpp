 #include<iostream>
#include<vector>
using namespace std;
void change(int a[]){
    a[2]=555;
}
int main(){
    // int arr[] ={1,2,3,45,5,65,6};
    // cout<<arr[2]<<endl;
    // change(arr);
    // cout<<arr[2];
    // vector<vector<int> >v(5,vector<int> (2,8));
    vector< vector<int> > v(5,vector<int> (4,2));
    cout<<v[4].size();
     
}
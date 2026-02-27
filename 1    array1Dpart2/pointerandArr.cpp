#include <iostream>
using namespace std;
int main() {
    int arr[]={4,5,6,7,8};
    int* ptr=arr; //this means giving address of first element of array to pointer
    // *ptr=9; //this means changing value of first element of array
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr; //resetting pointer to point to first element of array
    cout<<endl;
    *ptr=10;
    ptr++;
    *ptr=11;
    ptr--;
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;

}
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int num=1;
    for(int i=1;i<n;i=i+1)
    {
        num=num*n;
    }
    cout<<num;
}
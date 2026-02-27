#include<iostream>
using namespace std;

int dummy (int n)
{
    n++;
    return n;
}
int main()
{
    int n;
    cin>>n;
    cout<<dummy(n)<<endl;
    cout<<n;
}
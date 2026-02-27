#include<iostream>
using namespace std;
void fun(int m)
{
    for (int i =1;i<=m;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
}
int main()
{
    fun(4);
    fun(9);
    fun(2);

}
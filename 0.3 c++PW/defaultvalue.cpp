#include<iostream>
using namespace std;
void fun(int x=3, bool y=true){
    cout<<x<<" "<<y;
}

int main(){
    fun(8,5);
}
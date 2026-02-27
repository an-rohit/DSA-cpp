#include <iostream>
using namespace std;
int main() {
    int x,y;
    int* p1 =&x;
    int* p2 =&y;
    cin>>*p1>>*p2;
    cout<< "sum of both is :" << *p1+*p2<<endl;
}
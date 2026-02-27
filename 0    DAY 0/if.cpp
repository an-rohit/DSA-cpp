#include <iostream>
using namespace std;
int main() {
    int package;
    cout << "enter package";
    cin>>package;
    if(package>10){
        cout<<"accepted";
    }
    else{
        cout<<"rejected"<<endl;
    }

    return 0;
}
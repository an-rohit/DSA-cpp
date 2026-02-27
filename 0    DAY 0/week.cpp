// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "enter num";
    cin>>num;
    if(num==1){
        cout<<"sun";
    }
    else if(num==2){
        cout<<"mon"<<endl;
    }
    else if(num==3){
        cout<<"tue"<<endl;
    }
    else if(num==4){
        cout<<"wed"<<endl;
    }
    else if(num==5){
        cout<<"thru"<<endl;
    }
    else if(num==6){
        cout<<"fri"<<endl;
    }
    else if(num==7){
        cout<<"sat"<<endl;
    }
    else{
        cout<<"enter between 1to 7"<<endl;
    }

    return 0;
}
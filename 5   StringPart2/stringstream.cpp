#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>   //header file for stringstream
using namespace std;

int main() {
    string str;
    getline(cin,str);
    stringstream ss(str); 
    
    string temp;
    while(ss>>temp){   //ss mein se input lelo temp mei
        cout<<temp<<endl; 
    }
}
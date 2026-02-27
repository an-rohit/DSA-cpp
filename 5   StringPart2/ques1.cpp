#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    char result;
    int maxcount = 0;

    for (int i = 0; i < s.length(); i++) {
        int count = 0;

        for (int j = 0; j < s.length(); j++) {
            if (s[j] == s[i])
                count++;
        }

        if (count > maxcount) {
            maxcount = count;
            result=s[i];
        }
    }

    cout << result<<" "<<maxcount;




    // for(int i=0;s[i]!='\0';i++){
    //     int count=0;
    //     char ch = s[i];
    //     for (int j=0;s.length();j++){
    //         if(s[i]==s[j]) count++;
    //     }
    //     if(count==maxcount){
    //         cout<<ch<<" "<<maxcount;
    //     }
    // }
}
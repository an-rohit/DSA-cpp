#include<iostream>
#include<string>
using namespace std;
int main(){
    int count = 0;
    char str[]={'h','e','l','l','o','g','f'};
    int i=0;
    while(str[i]!=0){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<'\n'<<count;

    // string str = "raghav";
    // cout<<sizeof(str);

}                 
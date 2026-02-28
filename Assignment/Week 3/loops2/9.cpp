#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1 ;i<=500;i++){
        int sum=0;
        int original=i;
        int temp=i;
        while(temp>0){
            int dig =temp%10;
            sum += pow(dig,3);
            temp/=10;
        }
        if(original==sum) cout<<original<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount;
    cout<<"Enter the amount :";
    cin>>amount;
    int notes[]={500,100,50,20,10,5,2,1};
    for(int i=0;i<8;i++){
        int count=amount/notes[i];
        cout<<"notes of "<<notes[i]<<" = "<<count<<endl;
        amount=amount%notes[i];
    }






    // int note=500;
    // switch (note)
    // {
    // case 500:
    //     if (amount>=500){
    //         cout<<"notes of 500 ="<<amount/500;
    //         amount=amount%500;
    //     }
        
    // case 100:
    //     if (amount>=100){
    //         cout<<" and notes of 100 ="<<amount/100;
    //         amount=amount%100;
    //     }
        
    // case 50:
    //     if (amount>=50){
    //         cout<<" and notes of 50 ="<<amount/50;
    //         amount=amount%50;
    //     }
        
    // case 20:
    //     if (amount>=20){
    //         cout<<" and notes of 20 ="<<amount/20;
    //         amount=amount%20;
    //     }
        
    // case 10:
    //     if (amount>=10){
    //         cout<<" and notes of 10 ="<<amount/10;
    //         amount=amount%10;
    //     }
        
    // case 5:
    //     if (amount>=5){
    //         cout<<" and notes of 5 ="<<amount/5;
    //         amount=amount%5;
    //     }
        
    // case 2:
    //     if (amount>=2){
    //         cout<<" and notes of 2 ="<<amount/2;
    //         amount=amount%2;
    //     }
        
    // case 1:
    //     if (amount>=1){
    //         cout<<" and notes of 1 ="<<amount/1;
    //         amount=amount%1;
    //     }
        
        
    
    
        
    // }
}
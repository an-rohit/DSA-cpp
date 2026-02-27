//to display roll whose marks are less than 35

#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"enter number of students:";
   cin>>n;
   int marks[n];
   for(int i=0;i<=n;i++){
       cout<<"enter marks of roll"<<i+1<<":";
       cin>>marks[i];
   }
   cout<<"marks less than 35 are of roll :"<<endl;
   for(int i=0;i<=n;i++){
       if (marks[i]<35){
           cout<<i+1<<" ";
       }    
   }
}
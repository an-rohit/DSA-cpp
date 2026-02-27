#include <iostream>
using namespace std;
int main() {
    int n;
    int num;
    cout<<"enter num:";
    cin>>num;
    cin>>n;
    while(num>9)
    switch(n)
    {   case 1: cout<<"division are as follows: "<<endl;
        case 100:cout<<"100s are"<<num/100<<endl;
                num=num%100;
        case 50:cout<<"50s are"<<num/50<<endl;
                num=num%50;
        case 20:cout<<"20s are"<<num/20<<endl;
                num=num%20;        
        case 10:cout<<"10s are"<<num/10<<endl;
                num=num%10;
    }
}












#include <iostream>
using namespace std;
int main() {
    //pow(a,b)
    int a,b;
    while (true)
    {
        int ans=1;
        cout<<"entr a,b"<<endl;
        cin>>a>>b;
        for(int i=1;i<=b;i++)
        {
            ans=ans*a;
        }
    cout<<ans<<endl;
    }
}



//////or



#include <iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for (int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main() {
    //pow(a,b)
    
    int a,b;
    while(true){
        cout<<"enter a, b: "<<endl;
        cin>>a>>b;
        power(a,b);
        cout<<power(a,b)<<endl;
    }

}
// by function method









#include <iostream>
using namespace std;    //nCr
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r){
    int nume=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    int result=nume/denom;
    return result;
}

int main(){
    int r,n;
    cout<<"enter n and r : "<<endl;
    cin>>n>>r;
    cout<<nCr(n,r);
}

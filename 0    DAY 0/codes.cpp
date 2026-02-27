#include <iostream>
using namespace std;
int main() {
    // sum of n natural nos.
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
}

/*                                    */

#include <iostream>
using namespace std;
int main() {
    // factorial.
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    int factorial=1;
    for(int i=n;i>=1;i--)
    {
        factorial=factorial*i;
    }
    cout<<factorial;
}
// bda no. jese 67,88 ye sab ka 0 answer ata hai

/*                                      */

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    if (n<2)
    {
        cout<<"not prime";
        return 0;
    }   
    else
    {
        for (int i=2;i<n;i++)
        {
            if (n%i==0)
            {
                cout<<"not prime";
                return 0;
            }
        
        }
        cout<<"prime"<<endl;
        return 0;
    }

    /*                                            */


    #include <iostream>
using namespace std;
int main() 
{
    //fibonacci series 0,1,1,2,3,5,8,13...
    int a,b,c;
    a=0;
    b=1;
    int n;
    cout<<"enter n : ";
    cin>>n;
    cout<<a<<" ";
    cout<<b<<" ";
    for (int i=1;i<n-2;i++)
    {
        
        a=b;
        b=c;
        c=a+b;
        cout<<c<<" ";
    }
}

/*                                      */



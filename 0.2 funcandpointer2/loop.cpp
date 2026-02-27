// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n:";
    cin >>n;
    for (int i=0;i<=n;i++)
    {
            int count=0;
            for (int div=2 ;div*div<=n ;div++)
            {
                if(i%div==0)
                {
                    count++;
                    break;
                }
            }
            if (count==0)
            {
                cout<<i<<" ";
            }       
    }
}
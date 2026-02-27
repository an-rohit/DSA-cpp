#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"n:";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for (int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}







#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"n:";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=i-1;j>0;j--)
        {
            cout<<j;
        }
    cout<<endl;
    }
}










#include <iostream>
using namespace std;
int main() 
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=5-i;j++)
        {
        // space
            cout<<" ";
        }
        for (int j=1;j<=2*i-1;j++)
        {
        //star
            cout<<"*";
        }
    
    cout<<endl;
    }
}








#include <iostream>
using namespace std;
int main() 
{
    for (int i=1;i<=4;i++)
    {
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //space
        for (int k=1;k<=8-2*i;k++)
        {
            cout<<" ";
        }
        //star
        for(int l=1;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    //2nd loop
    for (int i=3;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for (int k=1;k<=8-2*i;k++){
            cout<<" ";
        }
        for(int l=1;l<=i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}











#include <iostream>
using namespace std;
int main() 
{
    for (int i=3;i>=0;i--)
    {
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for (int j=1;j<=4-i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=4-i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
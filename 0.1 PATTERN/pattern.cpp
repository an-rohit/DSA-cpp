#include <iostream>
using namespace std;
int main() 
{
    //pattern
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++){
            cout<<"*";
            
        }
        cout<<"\n";
    }
}





#include <iostream>
using namespace std;
int main() 
{
    //pattern
    for (int i=1;i<=4;i++)
    {
        for (int j=1;j<=5;j++)
        {
            cout<<"10"<<" ";
        }
        cout<<"\n";
    }
}






#include <iostream>
using namespace std;
int main() 
{
    //pattern
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}







#include <iostream>
using namespace std;
int main() 
{
    //pattern
    for (int i=1;i<=5;i++)
    {
        for (int j=i;j>0;j--)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}






#include <iostream>
using namespace std;
int main() 
{
    //pattern
    char ch ='a';
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            cout<<ch<<" ";
        }
        
        cout<<"\n";
        ch=ch+1;
    }
}




#include <iostream>
using namespace std;
int main() 
{
    //pattern
    int num=1;
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            cout<<num<<" ";
            num=num+1;
            
        }
        
        cout<<"\n";
        
    }
}
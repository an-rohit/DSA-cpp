#include <iostream>
using namespace std;
int main() 
{
    //pattern 2
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
        
    }
}






#include <iostream>
using namespace std;
int main() 
{
    //pattern 2
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
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
    //pattern 2
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
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
    //pattern 2
    // reverse
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
    //pattern 2
    char ch ='a';
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
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
    //pattern 2
    for (int i=1;i<=5;i++)
    {
        for (int j=i;j<=5;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
        
    }
}











#include <iostream>
using namespace std;
int main() 
{
    //pattern 2
    for (int i=5;i>=1;i--)
    {
        for (int j=5;j>=i;j--)
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
    //pattern 2
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
            for ( int j=1;j<=i;j++)
            {
                cout<<"*";
            }
        cout<<"\n";
    }
}








#include <iostream>
using namespace std;
int main() 
{
    //pattern 2
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
            for ( int j=1;j<=i;j++)
            {
                cout<<j;
            }
        cout<<"\n";
    }
}











#include <iostream>
using namespace std;
int main() 
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++){
            cout<<" "<<" ";
        }
            for ( int j=1;j<=i;j++)
            {
                cout<<j<<" ";
            }
            cout<<"\n";
    }
}

























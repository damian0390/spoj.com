#include <iostream>

using namespace std;
int t,a,b;
int main()
{
    cin>>t;
    for (int i=0; i<t; i++)
        {
            int z=0,k=2;
            cin>>a>>b;
            if (a==b) cout<<a<<endl;
            else if (a>b)
            {
               while (z==0)
               {
                   if (k*b%a==0)
                   {cout<<k*b<<endl;
                   z=1;
                   }
                   k++;
               }
            }
            else
                {
               while (z==0)
               {
                   if (k*a%b==0)
                   {cout<<k*a<<endl;
                   z=1;
                   }
                   k++;
               }
            }
        }
    return 0;
}

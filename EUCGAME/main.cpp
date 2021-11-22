#include <iostream>

using namespace std;
int t,a,b,z;
int main()
{
    cin>>t;
    for (int i=0; i<t; i++)
    {
        cin>>a>>b;
        z=0;
        while (z==0)
        {
            if (a==b)
            {
                cout<<a+b<<endl;
                z++;
            }
            else if (a>b) a=a-b;
            else b=b-a;
        }
    }
    return 0;
}

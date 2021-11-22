#include <iostream>

using namespace std;
int t,n;
int main()
{
    cin>>t;
    for (int i=0; i<t; i++)
    {
        cin>>n;
     int tab[n];
     for (int j=0; j<n; j++)
     {
         cin>>tab[j];
     }
     for (int x=1; x<n; x+=2)
     {
         cout<<tab[x]<<" ";
     }
     for (int y=0; y<n; y+=2)
     {
         cout<<tab[y]<<" ";
     }
     cout<<endl;
    }
    return 0;
}

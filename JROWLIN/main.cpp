#include <iostream>
#include <iomanip>

using namespace std;
float a,b,c;
int d;
int main()
{
    cin>>a>>b>>c;
    if (a==0 && b == c) cout<<"NWR"<<endl;
    else if (a==0 && b!=c ) cout<<"BR"<<endl;
    else
    {
      cout<<fixed<<setprecision(2)<<(c-b)/a<<endl;
    }
    return 0;
}

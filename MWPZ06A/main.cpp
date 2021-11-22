#include <iostream>
#include <math.h>

using namespace std;
float X, Y, Z;
int r, D;
int main()
{
    cin>>D;
    for (int i=0; i<D; i++)
    {
        cin>>X>>Y>>Z;
        r=round(-12*(((-Y-(Z*X)+(Z*Y))/(1-Z))-X));
        cout<<r<<endl;
    }

    return 0;
}

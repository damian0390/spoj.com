#include <iostream>
#include <list>
#include <iterator>

using namespace std;

float a,b,c,x;
list<float> wsp;
int main()
{
while (cin>>x) wsp.push_back(x);

while (!wsp.empty())
{
    a=wsp.front();
    wsp.pop_front();
    b=wsp.front();
    wsp.pop_front();
    c=wsp.front();
    wsp.pop_front();


     if(b*b-4*a*c>0) cout << 2 << endl;
     else if(b*b-4*a*c==0) cout << 1 << endl;
     else cout << 0 << endl;
 }

    return 0;
}

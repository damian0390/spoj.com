#include <iostream>

using namespace std;
float r,d;
double result;
int main()
{
    cin>>r>>d;
    result=3.141592654*(r*r-(d*d/4));
    cout << fixed << result << endl;
    return 0;
}

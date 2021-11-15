#include <iostream>

using namespace std;
int t;
float x1,y1,x2,y2,x3,y3;
int main()
{
    cin>>t;
    for(int i=0; i<t; i++)
    {
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if (x1==x2 && x1==x3 || y1==y2 && y1==y3) cout<<"TAK"<<endl;
    else if (x2-x1==0 || x3-x1==0 || y2-y1==0 || y3-y1==0) cout<<"NIE"<<endl;
    else if (((x2-x1)/(y2-y1))==((x3-x1)/(y3-y1))) cout<<"TAK"<<endl;
    else cout<<"NIE"<<endl;
    }
    return 0;
}

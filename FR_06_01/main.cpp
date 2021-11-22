#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float M16, K16, M36, K36;
    int m16, k16, m36, k36;
    cin>>M16>>K16>>M36>>K36;
    cin>>m16>>k16>>m36>>k36;
    cout <<"K16K36: "<<fixed<<setprecision(2)<<((K16*k16)+(K36*k36))/(k16+k36)<< endl;
    cout <<"M16M36: "<<((M16*m16)+(M36*m36))/(m16+m36)<< endl;
    cout <<"M16K16M36K36: "<<((K16*k16)+(K36*k36)+(M16*m16)+(M36*m36))/(k16+k36+m16+m36)<< endl;
    return 0;
}

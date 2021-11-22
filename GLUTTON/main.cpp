#include <iostream>

using namespace std;

int Z;

int main()
{
    cin>>Z;
    for(int i=0; i<Z; i++)
    {
        int M,N,x,y,sum=0;
        cin>>M>>N;
        for (int j=0; j<M; j++)
        {
          cin>>x;
            sum+=86400/x;
        }
        y=sum/N;
        if (y*N==sum) cout << sum/N << endl;
        else cout << (sum/N)+1 << endl;
    }

    return 0;
}

#include <iostream>
#include <math.h>

using namespace std;
int t,n;
int main()
{
  cin>>t;
  for (int i=0; i<t; i++)
  {
      cin>>n;
      int tab[n];
      int sum=0,result;
      float av,r=100;
      for (int j=0; j<n; j++)
      {
          cin>>tab[j];
          sum+=tab[j];
      }
      av=(float)sum/n;
      for (int k=0; k<n; k++)
      {
          if (fabs(tab[k]-av)<r)
          {
              result=tab[k];
              r=fabs(tab[k]-av);
          }
      }
      cout<< result <<endl;
  }
    return 0;
}

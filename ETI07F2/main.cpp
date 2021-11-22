#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
  int n, licznik=0;
  float t, d, x, y, v;
  cin>>n>>t>>d>>x>>y>>v;
  float X[n], Y[n], odl[n], czas[n];
  for (int i=0; i<n; i++){
    cin>>X[i]>>Y[i];
    odl[i]=sqrt(pow((x-d-X[i]), 2)+pow((y-Y[i]), 2));
    czas[i]=2*((odl[i]/v)+d);
  }
  sort(czas, czas + n);

  do{
    t=t-czas[licznik];
    licznik++;
  }while(t>=0 && licznik<n);

cout<<licznik-1;

}

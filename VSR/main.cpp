#include <iostream>
using namespace std;
int n,v1,v2;
int main() {
  cin>>n;
  for (int i=0; i<n; i++)
  {
  cin>>v1>>v2;
  cout << 2*v1*v2/(v1+v2)<< endl;
  }
}

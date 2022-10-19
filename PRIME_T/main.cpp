#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int t,liczba,a,z;
  cin>>t;
  for (int i=0; i<t; i++){
    z=0;
cin>>liczba;
if (liczba==1){cout<<"NIE"<<endl;continue;}
if (liczba==2){cout<<"TAK"<<endl;continue;}

a=sqrt(liczba)+1;

for(int j=2; j<a;j++){
  if (liczba%j==0){cout<<"NIE"<<endl;z=1;break;}
}
if(z==0) cout<<"TAK"<<endl;

  }
}

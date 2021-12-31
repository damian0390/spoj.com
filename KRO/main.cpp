#include <iostream>
using namespace std;

int main() {
int t,n,a,b;
cin>>t;
for (int i=0; i<t; i++){
cin>>n>>a>>b;
n=n%60;
if (n==0) n=60;
int *tab = new int[n];

if (n==1){cout<<a%10<<endl;continue;}
if (n==2){cout<<b%10<<endl;continue;}
tab[0]=a%10;
tab[1]=b%10;
for (int j=2; j<n; j++){
tab[j]=(tab[j-1]+tab[j-2])%10;
}
cout<<tab[n-1]<<endl;
delete[]tab;
} return 0;
}

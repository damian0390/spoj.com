#include <iostream>
using namespace std;

int main() {
int n,x=1; cin>>n;
if (n==1||n==2) cout<<"NIE";
else if (n==0) cout<<0;
else{
for (int i=0; i<n+2; i++){
if (x>n){x=0;continue;}
cout<<x<<" ";
x+=2;
}}
return 0;
}

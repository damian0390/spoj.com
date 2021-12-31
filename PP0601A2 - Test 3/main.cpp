#include <iostream>
using namespace std;

int main() {
 int f,s,i=0;
 cin>>f;cout<<f<<endl;
 while (true){
s=f;
cin>>f;cout<<f<<endl;
if (f==42&&s!=42) i++;
if (i==3) break;

 }
}

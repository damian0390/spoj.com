#include <iostream>
#include <string>
using namespace std;

int main() {
 int n; cin>>n;
 string s;
 for (int i=0; i<n; i++){
cin>>s;
s.erase(s.size()/2,s.size()/2);
cout<<s<<endl;
 }
 return 0;
}

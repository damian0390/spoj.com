#include <iostream>
#include <vector>

using namespace std;

int main() {
int t, n, c; cin>>t;
vector <int> v;

for (int i=0; i<t; i++){
cin>>n;
for (int j=0; j<n; j++){
  cin>>c;
  v.push_back(c);
}
v.push_back(v[0]);
v.erase(v.begin());
for (int j=0; j<n; j++){
  cout<<v[j]<<" ";
}
v.clear();
}
}

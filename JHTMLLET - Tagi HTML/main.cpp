#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector <string> tab;
  string st;
  bool z;
  while (getline(cin,st)){
   if (st.empty()) break;
     tab.push_back(st);
}

for (int i=0; i<tab.size();i++){
  for (int j=0; j<tab[i].size();j++){
if (tab[i][j]=='<') {z=true; cout<<"<";}
else if (tab[i][j]=='>') {z=false; cout<<">";}
else if (z==true) cout<<(char)toupper(tab[i][j]);
else cout<<tab[i][j];
  }
  cout<<endl;
}
}

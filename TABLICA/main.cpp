#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
vector <int> tab;
  string a;
  getline(cin,a);
size_t pos = 0;

while ((pos = a.find(" ")) != string::npos) {
    tab.push_back(stoi(a.substr(0, pos)));
    a.erase(0, pos + 1);
}
tab.push_back(stoi(a));
for (int i=tab.size(); i>0; i--){
  cout<<tab[i-1]<<" ";
}
}

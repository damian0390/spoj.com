#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
  int N,sum; cin>>N;
  bool sig;
  string wyr;

 for(int i=0;i<N;i++){
   sum=0;sig=true;
    cin>>wyr;
    char *tab=new char[wyr.size()];
strcpy(tab, wyr.c_str());
for (int j=0;j<wyr.size();j++){
if (tab[j]=='+') sig=true;
else if (tab[j]=='-') sig=false;
else if (tab[j]>47&&sig==true) sum+=tab[j]-48;
else sum-=tab[j]-48;
}
cout<<sum<<endl;
    delete[]tab;
  }
}

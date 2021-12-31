#include <iostream>
#include <algorithm>

using namespace std;

int main() {
int swoj[26], przeciwnik[26];
int z=0, y=0, a=0;

for (int i=0; i<26; i++){
  cin>>swoj[i];
}

sort(swoj,swoj+26);

for (int j=1; j<53; j++){
if (swoj[z] != j){
        przeciwnik[a] = j;
        a++;
}else z++;
}

for (int k=0; k<26; k++){
if(swoj[k]>przeciwnik[y]){
  y+=1;
}}

cout<<y;
return 0;
}

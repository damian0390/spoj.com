#include <iostream>
#include <string>

using namespace std;

int main() {

int t;
cin>>t;
string pierwszy, drugi, trzeci;

for (int i=0; i<t; i++){
cin>>pierwszy>>drugi;
trzeci=pierwszy+pierwszy;

size_t znalezionaPozycja = trzeci.find( drugi );
if( znalezionaPozycja == string::npos ) cout<<"no"<<endl;
else cout<<"yes"<<endl;
}

}

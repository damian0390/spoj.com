#include <iostream>
#include <math.h>
using namespace std;

class Point{

public:
string name;
int x;
int y;

Point (string nn=" ", int xx=0, int yy=0){
  name=nn;
  x=xx;
  y=yy;
}

void show(){cout<<name<<" "<<x<<" "<<y<<endl;}
float distance(){return sqrt(x*x+y*y);}
};

int main() {
int t,n,x,y,c;
Point a;
string na;
cin>>t;

for (int i=0;i<t;i++){
  c=1;
  cin>>n;
  Point *tab=new Point[n];
  for(int j=0;j<n;j++){
    cin>>na>>x>>y;
    tab[j]=Point(na,x,y);
  }
if (n==1) {tab[0].show();continue;}

while (c!=0){
  c=0;
for (int j=1; j<n;j++){
  if(tab[j].distance()<tab[j-1].distance()){
    c++;
    a=tab[j];
    tab[j]=tab[j-1];
    tab[j-1]=a;
  }
}
}

for (int j=0; j<n;j++){
  tab[j].show();
}
cout<<endl;
  delete[]tab;
}

}

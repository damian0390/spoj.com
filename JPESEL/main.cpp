#include <iostream>

using namespace std;
char pesel[11];
int t;
int main()
{
   cin>>t;
   for (int i=0; i<t; i++)
   {
       int sum=0;
       cin>>pesel;
       sum += (pesel[0]-'0')*1;
       sum += (pesel[1]-'0')*3;
       sum += (pesel[2]-'0')*7;
       sum += (pesel[3]-'0')*9;
       sum += (pesel[4]-'0')*1;
       sum += (pesel[5]-'0')*3;
       sum += (pesel[6]-'0')*7;
       sum += (pesel[7]-'0')*9;
       sum += (pesel[8]-'0')*1;
       sum += (pesel[9]-'0')*3;
       sum += (pesel[10]-'0')*1;

        if (sum%10==0) cout<<"D"<<endl;
        else cout<<"N"<<endl;
   }
    return 0;
}

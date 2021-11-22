#include <iostream>

using namespace std;
int D,b,c,x;
char a[10];
int main()
{
    cin>>D;
    for (int i=0; i<D; i++)
    {

       cin>>a>>b;
       for (int j=0; j<10; j++)
       {
           if (a[j]!=0) c=a[j]-'0';
       }
       x=c;

if (b==1) cout<<x<<endl;
else{
       if (x==0) cout<<0<<endl;
       else if (x==1) cout<<1<<endl;
       else if (x==5) cout<<5<<endl;
       else if (x==6) cout<<6<<endl;
       else if (x==2)
       {
           if ((b%4)==0) cout<<6<<endl;
           else if ((b%4)==1) cout<<2<<endl;
           else if ((b%4)==2) cout<<4<<endl;
           else if ((b%4)==3) cout<<8<<endl;
       }
       else if (x==3)
       {
           if ((b%4)==0) cout<<1<<endl;
           else if ((b%4)==1) cout<<3<<endl;
           else if ((b%4)==2) cout<<9<<endl;
           else if ((b%4)==3) cout<<7<<endl;
       }
       else if (x==7)
       {
           if ((b%4)==0) cout<<1<<endl;
           else if ((b%4)==1) cout<<7<<endl;
           else if ((b%4)==2) cout<<9<<endl;
           else if ((b%4)==3) cout<<3<<endl;
       }
       else if (x==8)
       {
           if ((b%4)==0) cout<<6<<endl;
           else if ((b%4)==1) cout<<8<<endl;
           else if ((b%4)==2) cout<<4<<endl;
           else if ((b%4)==3) cout<<2<<endl;
       }
       else if (x==4)
       {
           if ((b%2)==0) cout<<6<<endl;
           else if ((b%2)==1) cout<<4<<endl;
       }
       else if (x==9)
       {
           if ((b%2)==0) cout<<1<<endl;
           else if ((b%2)==1) cout<<9<<endl;
       }

}


    }
    return 0;
}

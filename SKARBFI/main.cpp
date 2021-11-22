#include <iostream>

using namespace std;

int D,N,a,b,pp,wz;

int main()
{
    cin>>D;
    for (int i=0; i<D; i++)
    {
        pp=0;
        wz=0;
        cin>>N;
     for (int j=0; j<N; j++)
     {
       cin>>a>>b;
       if(a==0) pp=pp+b;
       else if(a==1) pp=pp-b;
       else if(a==2) wz=wz+b;
       else if(a==3) wz=wz-b;
     }

     if (pp==0&&wz==0) cout<<"studnia"<<endl;
     else if (pp>0&&wz==0) cout<<0<<" "<<pp<<endl;
     else if (pp<0&&wz==0) cout<<1<<" "<<-pp<<endl;
     else if (pp==0&&wz>0) cout<<2<<" "<<wz<<endl;
     else if (pp==0&&wz<0) cout<<3<<" "<<-wz<<endl;
     else
     {
         if (pp>0) cout<<0<<" "<<pp<<endl;
         else cout<<1<<" "<<-pp<<endl;
         if (wz>0) cout<<2<<" "<<wz<<endl;
         else cout<<3<<" "<<-wz<<endl;
     }

    }

    return 0;
}

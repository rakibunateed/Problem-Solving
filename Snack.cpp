#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x,y;
   cin>>x>>y;
   cout<<fixed<<setprecision(2);
   if (x == 1)
   {
    cout<<"Total: R$ "<<y*4.00<<endl;
   }
   else if (x == 2)
   {
    cout<<"Total: R$ "<<y*4.50<<endl;
   }
   else if (x == 3)
   {
    cout<<"Total: R$ "<<y*5.00<<endl;
   }
   else if (x == 4)
   {
    cout<<"Total: R$ "<<y*2.00<<endl;
   }
   else if (x == 5)
   {
    cout<<"Total: R$ "<<y*1.50<<endl;
   }
    return 0;
}
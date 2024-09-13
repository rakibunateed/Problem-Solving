#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X;
    double Y,mileage;
    cin>>X>>Y;

    mileage = X / Y;
    cout<<fixed<<setprecision(3);
    cout<<mileage<<" km/l"<<endl; 
    return 0;
}
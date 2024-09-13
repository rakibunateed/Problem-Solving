#include <bits/stdc++.h>
using namespace std;

int main()
{
    int time,distance;
    double fuelUsed;
    cin>>time>>distance;
    fuelUsed = time * (distance/12.0);
    cout<<fixed<<setprecision(3);
    cout<<fuelUsed<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double R,volume,pi=3.14159;
    cin>>R;

    volume = (4/3.0) * pi * R * R * R;
    cout<<fixed<<setprecision(3);
    cout<<"VOLUME = "<<volume<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    double sum = a+b+c;
    double large = max({a, b, c});
    double sub = sum - large;
    cout<<fixed<<setprecision(1);

    if (sub > large)
    {
        double area = a+b+c;
        cout<<"Perimetro = "<<area<<endl;
    }
    else if (large >= sub)
    {
        double trapezium = ((1/2.0)*((a+b)*c));
        cout<<"Area = "<<trapezium<<endl;
    }
    return 0;
}
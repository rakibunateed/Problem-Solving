#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,x1,x2,root,square;
    cin>>a>>b>>c;

    root = ((b*b)-(4*a*c));
    square = sqrt(root);

    x1 = (-b + square) / (2.0*a);
    x2 = (-b - square) / (2.0*a);
    cout<<fixed<<setprecision(5);
    if (a == 0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        if (root < 0)
    {
       cout<<"Impossivel calcular"<<endl;
    }
    else
    {
    cout<<"R1 = "<<x1<<endl;
    cout<<"R2 = "<<x2<<endl;
    }
    } 
    return 0;
}
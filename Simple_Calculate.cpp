#include <bits/stdc++.h>
using namespace std;

int main()
{
    int product1,unit1;
    double price1,value=0;
    cin>>product1>>unit1>>price1;

    int product2,unit2;
    double price2;
    cin>>product2>>unit2>>price2;

    value = ((unit1*price1)+(unit2*price2));
    cout<<fixed<<setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<value<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,sum1,sum2;
    cin>>a>>b>>c>>d;

    sum1 = c + d;
    sum2 = a + b;
    if (b > c && d > a && sum1 > sum2 && c > 0 && d > 0 && a % 2 == 0 )
    {
        cout<<"Valores aceitos"<<endl;
    }
    else
    {
        cout<<"Valores nao aceitos"<<endl;
    }
    return 0;
}
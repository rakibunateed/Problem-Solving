#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hundred,fifty,twenty,ten,five,two,one,n;
    cin>>n;

    hundred = (n / 100);
    fifty = (n % 100) / 50;
    twenty = ((n % 100) % 50) / 20;
    ten = (((n % 100) % 50) % 20) / 10;
    five = ((((n % 100) % 50) % 20) % 10) / 5;
    two = (((((n % 100) % 50) % 20) % 10) % 5) / 2;
    one = ((((((n % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    
    cout<<n<<endl<<hundred<<" nota(s) de R$ 100,00"<<endl<<fifty<<" nota(s) de R$ 50,00"<<endl<<twenty<<" nota(s) de R$ 20,00"<<endl<<ten<<" nota(s) de R$ 10,00"<<endl<<five<<" nota(s) de R$ 5,00"<<endl<<two<<" nota(s) de R$ 2,00"<<endl<<one<<" nota(s) de R$ 1,00"<<endl;

    return 0;
}
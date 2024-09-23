#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int alcool = 0,gasolina = 0,Diesel = 0;

    while (true)
    {
       int n;
       cin>>n;
       if (n == 1)
       {
        alcool++;
       }
       else if (n == 2)
       {
        gasolina++;
       }
       else if (n == 3)
       {
        Diesel++;
       }
       else if (n == 4)
       {
        break;;
       }  
    }
    cout<<"MUITO OBRIGADO"<<endl<<"Alcool: "<<alcool<<endl<<"Gasolina: "<<gasolina<<endl<<"Diesel: "<<Diesel<<endl; 
    return 0;
}
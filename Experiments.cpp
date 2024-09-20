#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    double coelhos = 0,ratos = 0,sapos = 0,total = 0,percentage1,percentage2,percentage3;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
    int n;
    char a;
    cin>> n>> a;
    if (a == 'C')
    {
        coelhos += n;
    }
    else if (a == 'R')
    {
        ratos += n;
    }
    else if (a == 'S')
    {
        sapos += n;
    }
     total = coelhos + ratos + sapos;
     percentage1 = ((coelhos / total)*100.00);
    percentage2 = (ratos / total)*100.00;
    percentage3 = (sapos / total)*100.00;
    }
    cout<<"Total: "<<total<<" cobaias"<<endl<<"Total de coelhos: "<<coelhos<<endl<<"Total de ratos: "<<ratos<<endl<<"Total de sapos: "<<sapos<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<percentage1<<" %"<<endl<<"Percentual de ratos: "<<percentage2<<" %"<<endl<<"Percentual de sapos: "<<percentage3<<" %"<<endl;
    
    return 0;
}
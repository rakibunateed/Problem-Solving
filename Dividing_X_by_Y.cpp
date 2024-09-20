#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    double x,y;
    cin>>x>>y;
    cout<<fixed<<setprecision(1);
    if (y == 0)
    {
        cout<<"divisao impossivel"<<endl;
       
    }else
    {
         double div = x / y;
        cout<<div<<endl;
    }
    
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
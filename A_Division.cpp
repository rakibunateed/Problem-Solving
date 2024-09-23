#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    ll x;
    cin>>x;
    if ( 1900 <= x)
    {
        cout<<"Division 1"<<endl;
    }
    else if ( 1600 <= x && x <= 1899)
    {
        cout<<"Division 2"<<endl;
    }
    else if ( 1400 <= x && x <= 1599)
    {
        cout<<"Division 3"<<endl;
    }
    else if (  x <= 1399)
    {
        cout<<"Division 4"<<endl;
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
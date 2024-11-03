#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    bool perfect = true;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        ll interval = abs(a[i+1]-a[i]);
        if (interval != 5 && interval != 7)
        {
            perfect = false;
            break;
        }    
    }
    if (perfect)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
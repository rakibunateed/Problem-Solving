#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    ll n,count = 0;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min < a[i])
        {
            min = a[i];
            count++;
        }    
    }
    cout<<count<<endl;    
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
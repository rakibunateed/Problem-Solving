#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    ll n,x;
    cin>>n>>x;
    ll a[n],b[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    } 
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x)
        {
            sum +=b[i];
        }   
    }
    cout<<sum<<endl;    
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
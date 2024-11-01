#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    ll n,result;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll max1 = -1;
    for (int i = 0; i < n; i++)
    {
        if (max1 < a[i])
        {
            max1 = a[i];
        } 
    }
    ll max2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max1)
        {
            continue;
        }
        if (max2 < a[i])
        {
            max2 = a[i];
        } 
    }
    result = max1 + max2;
    cout<<result<<endl;  
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
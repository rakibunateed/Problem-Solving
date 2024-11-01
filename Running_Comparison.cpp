#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    ll n,count =0;
    cin>>n;
    ll a[n],b[n];
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
        int max = a[i];
        if (max < b[i])
        {
            max = b[i];
        }
        int min = b[i];
        if (min > a[i])
        {
            min = a[i];
        }
        
        if(min *2 >= max )
        {
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
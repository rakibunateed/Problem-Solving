#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    int n,m,sum = 0;
    cin>>n>>m;
    for (int i = min(n,m); i <= max(n,m); i++)
    {
       if (i == n || i == m)
       {
        continue;
       }
       if (i % 2 != 0)
       {
        sum+=i;
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
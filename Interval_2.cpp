#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    int n;
    cin>>n;
    int in = 0;
    int out = 0;

    if (n >= 10 && n <= 20)
    {
        in++;
    }
   
    cout<<in<<" in"<<endl<<out<<" out"<<endl;   
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
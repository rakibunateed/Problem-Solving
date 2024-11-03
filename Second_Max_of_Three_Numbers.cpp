#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    ll a[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    int max1 = -1;
    for (int i = 0; i < 3; i++)
    {
        if (max1 < a[i])
        {
            max1 = a[i];
        } 
    }
    int max2 = -1;
    for (int i = 0; i < 3; i++)
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
    cout<<max2<<endl;  
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
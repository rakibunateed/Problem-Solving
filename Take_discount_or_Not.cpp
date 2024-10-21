#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n];
    ll sum1 = 0,sum2 = 0,result;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum1 += a[i];   
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > y)
        {
           a[i] -= y;
           sum2+= a[i];
        }   
    }
    result = x+sum2;
    if (result < sum1)
    {
        cout<<"COUPON"<<endl;
    }
    else
    {
        cout<<"NO COUPON"<<endl;
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
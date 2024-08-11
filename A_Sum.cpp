#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
 
void solve()
{
   ll a,b,c;
   cin>>a>>b>>c;
   if (a+b == c || b+c == a || a+c == b)
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
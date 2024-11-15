#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
     ll n;
     cin>>n;
     string s;
     cin>>s;
     ll A = 0,B = 0,C = 0,D = 0,ignore = 0;
     for (int i = 0; i < s.length(); i++)
     {
        if (s[i] == 'A')
        {
            if (A < n)
            {
                A++;
            }  
        }
        if (s[i] == 'B')
        {
            if (B < n)
            {
                B++;
            }  
        }
        if (s[i] == 'C')
        {
            if (C < n)
            {
                C++;
            }  
        }
        if (s[i] == 'D')
        {
            if (D < n)
            {
                D++;
            }  
        }
        if (s[i] == '?')
        {
            ignore = 0;  
        }
     }
     ll sum = A+B+C+D+ignore;
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
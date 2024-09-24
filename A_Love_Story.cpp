#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    string s;
    cin>>s;
    string target = "codeforces";
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s[i] != target[i])
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
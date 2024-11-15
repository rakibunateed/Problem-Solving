#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll count = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == s[i+1])
        {
            count++;
        }  
    }
    cout<<count<<endl;
    return 0;
}
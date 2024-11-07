#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    string s,firstWord,secondWord;
    cin>>s;
    ll count = 0,number;
    if (s.length() <= 10)
        {
            cout<<s<<endl;   
        }
    else
        {
            firstWord =s[0];
            number = s.length()-2;
            secondWord = s[s.length()-1];
            cout<<firstWord<<number<<secondWord<<endl;  
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
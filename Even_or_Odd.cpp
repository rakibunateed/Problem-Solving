#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    int n;
    cin>>n;
    if (n == 0)
    {
        cout<<"NULL"<<endl;
    }
    if (n % 2 != 0 & n < 0) 
    {
        cout<<"ODD NEGATIVE"<<endl;
    }
    if (n % 2 != 0 & n > 0) 
    {
        cout<<"ODD POSITIVE"<<endl;
    }
    if (n % 2 == 0 & n < 0) 
    {
        cout<<"EVEN NEGATIVE"<<endl;
    }
    if (n % 2 == 0 & n > 0) 
    {
        cout<<"EVEN POSITIVE"<<endl;
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
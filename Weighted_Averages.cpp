#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    double n1,n2,n3,avg;
    cin>>n1>>n2>>n3;
    avg = ((n1*2)+(n2*3)+(n3*5))/10.0;
    cout<<fixed<<setprecision(1);
    cout<<avg<<endl;
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
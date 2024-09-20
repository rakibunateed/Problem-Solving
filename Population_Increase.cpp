#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve()
{
    int p1,p2;
    double g1,g2;
    cin>>p1>>p2>>g1>>g2;
    int count = 0;
    while (p1 <= p2 && count <= 100)
    {
        int percentage1 = p1*(g1/100);
        p1 += percentage1;
        int percentage2 = p2*(g2/100.0);
        p2 += percentage2;
        count++;
    }
    if (count > 100)
    {
        cout<<"Mais de 1 seculo."<<endl;
    }
    else
    {
        cout<<count<<" anos."<<endl;
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
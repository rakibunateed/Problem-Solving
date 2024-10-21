#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll x;
    cin>>x;
    if (x >= 0 && x <= 9)
    {
        cout<<"000"<<x<<endl;
    }
    else if (x >= 10 && x <= 99)
    {
        cout<<"00"<<x<<endl;
    }
    else if (x >= 100 && x <= 999)
    {
        cout<<"0"<<x<<endl;
    }
    else
    {
        cout<<x<<endl;
    }
    return 0;
}
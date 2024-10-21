#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,sum = 0,count = 0;
    cin>>a>>b;
    while (true)
    {
        if(count == 2)
    {
        break;
    }
    if (a> b)
    {
        sum+= a;
        a--;
        count ++;
    }
    else if(b> a)
    {
        sum+= b;
        b--;
        count ++;
    }
    else if(a == b)
    {
        sum+= a;
        count ++;
    }
    }
    cout<<sum<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    ll count = 0;
    ll big = max(n,m);
    for (int i = 0; i < big; i++)
    {
            if (n > 0 && m > 0)
            {
                n--;
                m--;
                count++;
            }      
    }
    if (count % 2 == 0)
    {
        cout<<"Malvika"<<endl;
    }
    else
    {
        cout<<"Akshat"<<endl;
    }
    return 0;
}
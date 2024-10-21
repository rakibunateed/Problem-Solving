#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,c;
    cin>>a>>b>>c;

    for (int i = a; i <=b; i++)
    {
       if (i % c == 0)
       {
        cout<<i<<endl;
        return 0;
       }
       
    }
    cout<<"-1"<<endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,count = 0;
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        count ++;    
    }
    cout<<count<<endl;
    
    return 0;
}
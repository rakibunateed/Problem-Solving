#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin>>N;
    for (ll i = 1; i <= N ; i++)
    {
       for (ll j = 1; j <= N-i; j++)
       {
        cout<<" ";
       }
       for (ll k = 1; k <= 2*i-1; k++)
       {
        cout<<"*";
       }
       cout<<endl;
    }
    for (ll i = N; i >= 1 ; i++)
    {
       for (ll j = N-i; j <= 1; j++)
       {
        cout<<" ";
       }
       for (ll k =1; k <= 2*i-1 ; k++)
       {
        cout<<"*";
       }
       cout<<endl;
    }
    
    return 0;
}
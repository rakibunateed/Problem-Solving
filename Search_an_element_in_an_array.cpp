#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,count =0,x;
    cin>>n>>x;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }  
    }
    if (count >= 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}
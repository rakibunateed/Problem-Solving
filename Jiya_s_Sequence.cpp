#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
	ll n;
	cin>>n;
	ll mul = 1;
	for(int i =0; i <n;i++){
		ll x;
		cin>>x;
		mul*=x;
		}
		ll digit = mul % 10;
        if (digit == 2 || digit == 3 || digit == 5)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
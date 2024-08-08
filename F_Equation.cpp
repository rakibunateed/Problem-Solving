#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
ll power(ll X,ll pow){
    ll result = 1;
    for (ll  i = 0; i < pow; i++)
    {
        result *= X;
    }
    return result;
}
ll printSum(ll X,ll B)
{
    ll sum = 0;
    for (ll i = 2; i <= B; i+=2)
    {
        sum += power(X,i);
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll X,N;
    cin >> X>>N;
        cout<<printSum(X,N);
    return 0;
}
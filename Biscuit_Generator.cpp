#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    double a,b,t,interval,mul;
    cin>>a>>b>>t;

    interval = floor((t+.5) / a);
    mul = interval * b;
    cout<<mul<<endl;


    return 0;
}
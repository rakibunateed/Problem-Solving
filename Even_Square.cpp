#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for (int i = 2; i <= n; i+=2)
    {
        cout<<i<<"^2"<<" = "<<i*i<<endl;
    } 
    return 0;
}
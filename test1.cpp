#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x;
    cin>>x;
    int steps = x / 5;       
    if (x % 5 != 0)
    {
        steps += 1;
    }              
    cout << steps << endl;
}
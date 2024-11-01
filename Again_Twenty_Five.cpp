#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{

    ll m;
    cin >> m;
    ll result = 1;

    for (int i = 0; i < m; i++)
    {
       result *= 5;
    }
    cout <<result % 100;
    return 0;
}
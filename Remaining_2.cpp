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

    for (int i = 1; i <= 10000; i++)
    {
        if (i % n == 2)
        {
            cout<<i<<endl;
        }   
    }
    return 0;
}
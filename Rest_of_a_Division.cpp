#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y;
    cin>>x>>y;
    for (int i = min(x,y); i <= max(x,y); i++)
    {
        if (i == x || i == y)
        {
            continue;
        }
        
        if (i % 5 == 2 || i % 5 == 3)
        {
            cout<<i<<endl;
        }
       
    } 
    return 0;
}
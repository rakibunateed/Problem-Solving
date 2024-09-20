#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y,sum =0;
    cin>>x>>y;
    for (int i = min(x,y); i <= max(x,y); i++)
    {
        if (i % 13 != 0)
        {
           sum += i;
        }   
    }
    cout<<sum<<endl; 
    return 0;
}
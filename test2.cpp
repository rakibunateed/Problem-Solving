#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int temp = n;
    for (int i = 0; i < k; i++)
    {
    if (temp % 10 != 0)
        {
            temp-=1;
        }
    else if (temp % 10 == 0)
        {
            temp/=10;
        }
    }
    cout<<temp<<endl;
    return 0;
}
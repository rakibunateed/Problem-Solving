#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true)
    {
        int n;
        cin>>n;
        if (n == 0)
        {
            break;
        }
        for (int i = 1; i <= n; i++)
        {
            cout<<i;
            if (i < n)
            {
               cout<<" ";
            }   
        }  
        cout<<endl;
    }
    return 0;
}
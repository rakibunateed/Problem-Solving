#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,count =0;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int advance = a[k-1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[k-1] && a[i] >= 0 && a[i] >= k)
        {
           count++;
        }
    } 
    cout<<count;
    return 0;
}
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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int p,q;
        cin>>p>>q;
       if (q - p >= 1) {
            count++;
        }   
    }
    cout<<count<<endl;
    return 0;
}
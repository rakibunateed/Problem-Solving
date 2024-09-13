#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin>>N;
    ll A[N];
    for (int i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    ll count = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 != 0)
        {
           cout<<count<<endl;
           break;
        }
        else if (A[i] % 2 == 0)
        {
           A[i]/= 2;
           count++;
        }
        
        
    }
    cout<<count<<endl;
    
    return 0;
}
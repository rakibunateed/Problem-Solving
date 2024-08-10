#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin>>N;
    ll A[N];
    for (int i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    ll max = A[0];
    for (int i = 0; i < N; i++)
    {
        if (A[i] > max)
        {
           max = A[i];
        }
        
    }
    cout<<max<<endl;
    return 0;
}
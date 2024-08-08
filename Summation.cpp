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
    ll sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i <N; i++)
    {
       sum+= A[i];
       
    }
    cout<<abs(sum)<<endl;
    return 0;
}
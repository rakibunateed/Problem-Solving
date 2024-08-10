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
    for (int i = 0; i <N; i++)
    {
        cin>>A[i];
    }

    ll lowest = A[0];
    ll index = 0;
    for (int i = 1; i <N; i++)
    {
        if (A[i] < lowest)
        {
           lowest = A[i];
            index = i; 
        }
    }
 
    cout<<lowest<<" "<<(index+1)<<endl;
    return 0;
}
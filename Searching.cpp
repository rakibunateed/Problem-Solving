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
    ll index = -1;
    ll X;
      cin>>X;
    for (size_t i = 0; i <N; i++)
    {
        if (A[i] == X) {
            index = i;
            break;
        }
    }
     if (index != X)
    {
       cout<<index<<" ";
    }
    else
    {
        cout<<"-1"<<endl;
    }
return 0;
}
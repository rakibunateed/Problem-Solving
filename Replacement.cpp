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
    for (int i = 0; i < N; i++)
    {
        if (A[i] >= 1)
        {
            cout<<"1 ";
        }
        else if (A[i] <= -1)
        {
            cout<<"2 ";
        }
        else
        {
            cout<<"0 ";
        }    
    }
    cout<<endl; 
    return 0;
}
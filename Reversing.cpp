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
    for (int i = 0; i < N/2; i++)
    {
        int temp = A[i];
        A[i] = A[N-i-1];
        A[N-i-1] = temp;
    }
    for (int i = 0; i < N ; i++)
    {
       cout<<A[i]<<" ";
    } 
    cout<<endl;
    return 0;
}
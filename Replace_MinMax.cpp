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
    int min = A[0];
    int max = A[0];
    for (int i = 0; i < N; i++)
    {
        if (min > A[i])
        {
            min = A[i];
        }
        if (max < A[i])
        {
            max = A[i];
        }   
    }
    for (int i = 0; i < N; i++)
    {
       int temp = min;
       min = max;
       max = temp;
       cout<<A[i]<<" ";
    }
    
    
    return 0;
}
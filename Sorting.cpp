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
    for (int i = 0; i < N-1; i++)
    {
        for (int j = 0; j < N-1-i; j++)
        {
            if (A[j] > A[j+1])
            {
                ll temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < N; i++)
    {
       cout<<A[i]<<" ";
    }
    cout<<endl;
    
    
    
    return 0;
}
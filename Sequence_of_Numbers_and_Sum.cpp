#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N,M;
    cin>>N>>M;
    int sum = 0;
    if (N<= 0 && M<= 0)
    {
        
    }
    else if (N > M)
    {
        for (long long i = M; i <=N; i++)
        {
            sum+=i;
        }
        cout<<M<<" "<<M+1<<" "<<N-1<<" "<<N<<" "<<"sum"<<" "<<"="<<sum<<endl;
        
    }
    else if (N < M)
    {
        for (long long i = N; i <=M; i++)
        {
            sum+=i;
        }
        cout<<N<<" "<<N+1<<" "<<M-1<<" "<<M<<" "<<"sum"<<" "<<"="<<sum<<endl;
        
    }
    return 0;
}
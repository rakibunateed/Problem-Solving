#include<bits/stdc++.h>
using namespace std;

int main(){
    while (true)
    {
        long long M,N;
        cin>>N>>M;
        long long  start = min(N,M);
        long long  end = max(N,M);
        long long sum = 0;
        if (N<=0 || M<=0)
        {
            break;
        }
        for (long long  i = start; i <=end; i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<endl;  
    }
    return 0;
}
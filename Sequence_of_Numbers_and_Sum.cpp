#include<bits/stdc++.h>
using namespace std;

int main(){
    while (true)
    {
        int M,N;
        cin>>N>>M;
        int Sum = 0;
        if (N<=0 || M<=0)
        {
            break;
        }
        for (long long  i = min(N,M); i <=max(N,M); i++)
        {
            cout<<i<<" ";
            Sum+=i;
        }
        cout<<"Sum="<<Sum<<endl;  
    }
    return 0;
}
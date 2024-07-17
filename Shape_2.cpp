#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin>>N;
    for (long long i = 1; i <=N; i++)
    {
        for (long long j = 1; j <=N-i; j++)
        {
            cout<<" ";
        }
        for (long long  k = 1; k <=2*i-1; k++)
        {
            cout<<"*";
        }
        cout<<endl;       
    }  
    return 0;
}
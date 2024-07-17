#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin>>N;
    if (N>0)
    {
        for (long long  i = 1; i <= N; i++)
        {
           if (N % i == 0)
           {
            cout<<i<<endl;
           }   
        }   
    } 
    return 0;
}
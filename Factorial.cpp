#include<bits/stdc++.h>
using namespace std;

int main(){
    long long T;
    cin>>T;
    for (long long i = 1; i <= T; i++)
    {
        long long N;
        cin>>N;
        long long fact = 1;
        for (long long i = 1; i <= N; i++)
        {
            fact*=i;
        }
        cout<<fact<<endl;
    }
    return 0;
}
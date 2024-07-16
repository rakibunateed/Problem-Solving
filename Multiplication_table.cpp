#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin>>N;
    for (long long i = 1; i <= 12; i++)
    {
        long long mul = N * i ;
        cout<<N<<" * "<<i<<" = "<<mul<<endl;
    }
    return 0;
}
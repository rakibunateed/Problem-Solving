#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin>>N;
    for (long long i = 1; i <= 10; i++)
    {
        long long mul = N * i ;
        cout<<i<<" x "<<N<<" = "<<mul<<endl;
    }
    return 0;
}
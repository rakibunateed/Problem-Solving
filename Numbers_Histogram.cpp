#include<bits/stdc++.h>
using namespace std;

int main(){
   char S;
    cin>>S;
    long long N;
    cin>>N;
    for (int i = 1 ; i <=N; i++)
    {   
        long long Xi;
        cin>>Xi;
        for (long long i = 1; i <=Xi; i++)
        {
            cout<<S;
        }
        cout<<endl;  
    }
    return 0;
}
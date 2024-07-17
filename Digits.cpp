#include<bits/stdc++.h>
using namespace std;

int main(){

    long long T;
    cin>>T;
    for (long long i = 0; i <T; i++)
    {
        long long N;
        cin>>N;
        long long temp = N;
        if (temp ==0)
        {
            cout<<"0";
        }
        while (temp != 0)
        {
            cout<<temp % 10<<" ";
            temp = temp /10;
        }
        cout<<endl;   
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long A,B;
    cin>>A>>B;
    if (A%B == 0 )
    {
        cout<<"Sao Multiplos"<<endl;
    }
    else if (B % A ==0)
    {
       cout<<"Sao Multiplos"<<endl;
    }
    else
    {
        cout<<"Nao sao Multiplos"<<endl;
         
    }
    return 0;
}
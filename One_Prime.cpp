#include<bits/stdc++.h>
using namespace std;

int main(){
    long long X;
    cin>>X;
    bool prime = true;
    if (X == 0 || X == 1)
    {
        prime = false;
    }
    for (long long i = 2; i <= X/2; i++)
    {
        if (X % i == 0)
        {
            prime = false;
            break;
        } 
    }
    if (prime)
    {
       cout<<"YES"<<endl;
    }
    else
    {
       cout<<"NO"<<endl;
    }
    
   
    return 0;
}
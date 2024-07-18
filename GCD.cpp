#include<bits/stdc++.h>
#include <algorithm> 
using namespace std;

typedef long long int ll;
void GCD(int X,int Y){

    for (int i = 1; i <= X; i++)
    {
        if (X % i == 0)
        {
            if (X == i)
            {
               continue;
            }
            
            cout<<i<<" ";
        } 
    }
    cout<<endl;
    for (int i = 1; i <= Y; i++)
    {
        if (Y % i == 0)
        {
            if (Y == i)
            {
               continue;
            }
            cout<<i<<" ";
        }
    }
    























    // int result = __gcd(X,Y);
    // cout<<result;
}

int main(){
    int A ,B;
    cin>>A>>B;
    GCD(A,B);
    return 0;
}
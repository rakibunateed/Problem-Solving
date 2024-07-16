#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C;
    cin>>A>>B>>C;
    int first = A;
    if (A>B)
    {
        first = B;
    }
    else if (B>C)
    {
        first = C;
    }
    int third = B;
    if (B<A)
    {
        third = A;
    }
    else if (A<C)
    {
        third = C;
    }
    int second;
    if (C>first && C<third)
    {
        second = C;
    }
    else if (A>first && A<third)
    {
        second = A;
    }
    else if (B>first && B<third)
    {
        second = B;
    }
    
    
    cout<<first<<endl<<second<<endl<<third<<endl;
    cout<<endl;
    cout<<A<<endl<<B<<endl<<C<<endl;

    return 0;
}
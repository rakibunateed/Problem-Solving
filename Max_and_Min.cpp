#include<bits/stdc++.h>
using namespace std;

int main(){
    long long A,B,C,min,max;
    cin>>A>>B>>C;

    min =A;
    if (B < min)
    {
        min =B;
    }
    if (C < min)
    {
        min =C;
    }
    max=A;
    if (B>max)
    {
        max = B;
    }
    if (C>max)
    {
        max = C;
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}
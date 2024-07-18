#include<bits/stdc++.h>
using namespace std;

int main(){
    long long T;
    cin>>T;
    for (long long  i = 0; i < T; i++)
    {
       long long X,Y;
       cin>>X>>Y;

       long start = min(X,Y);
       long end = max(X,Y);
       long long sum = 0;
        for (long long i = start ; i <= end; i++)
       {
            if (i == start || i == end)
                {
                    continue;
                }
            if (i % 2 != 0)
                {
                    sum+=i;
                }
       }
            cout<<sum<<endl;  
    }
    return 0;
}
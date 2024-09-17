#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int sum = 0;

    for (int i = min(x,y); i <= max(x,y); i++)
    {
        if (i == x || i == y)
        {
            continue;
        }
        if (i % 2 != 0)
        {  
            sum += i;    
        }
    }
    cout<<sum<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,sum=0,t = 10;
    while (t--)
    {
        cin>>x;
    for (int i = 1; i <=10; i++)
    {
        if (x == 0)
       {
        break;
       }
       if (x % 2 == 0)
       {
        sum += x; 
       }

    }
    }
    
    
    
   
    cout<<sum;
    
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int even = 0;
    for (int i = 0; i < 5; i++)
    {
        cin>>n;
        if (n % 2 == 0)
        {
            ++even;   
        }  
    }
    cout<<even<<" valores pares"<<endl; 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    double n;
    int positive = 0;
    for (int i = 0; i < 6; i++)
    {
        cin>>n;
        if (n > 0)
        {
            ++positive;   
        }  
    }
    cout<<positive<<" valores positivos"<<endl; 
    return 0;
}
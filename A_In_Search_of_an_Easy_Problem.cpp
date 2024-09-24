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
    cin>>n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            count++;
        }
        
    }
    if (count >= 1)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    
    
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,anton = 0,danik = 0;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'D')
        {
            danik++;
        }
        else
        {
            anton++;
        }
    }
    if (anton > danik)
    {
        cout<<"Anton"<<endl;
    }
    else if(danik > anton)
    {
        
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    } 
    return 0;
}
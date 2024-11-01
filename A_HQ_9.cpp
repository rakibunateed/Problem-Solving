#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H')
        {
            count++;
        }
        if (s[i] == 'Q')
        {
            count++;
        }
        if (s[i] == '9')
        {
            count++;
        }   
    }
    if (count >= 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
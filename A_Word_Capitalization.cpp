#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    for (int i = 0; i < str.length()-1; i++)
    {
        if (str[i] == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
               str[i] -=32;
               cout<<str[i];
            }
        }
        else{
            cout<<str[i];

        }
        
        
    }
    
    return 0;
}
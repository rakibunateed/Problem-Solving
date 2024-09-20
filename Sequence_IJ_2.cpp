#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 1; i <= 9; i+= 2)
    {
        for (int j = 7; j >= 5; j--)
        {
            cout<<"I="<<i<<" "<<"J="<<j<<endl;
        }  
    }
    return 0;
}
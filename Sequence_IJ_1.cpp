#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i = 1,j = 60;
    for (int x = 1; x <= 13; x++)
    {
        cout<<"I="<<i<<" "<<"J="<<j<<endl;
        i+=3;
        j-=5;   
    }  
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (j == 4)
            {
             cout<<"PUM";
            }
            if (j >= 1 && j < 4 )
            {    
            n+= 1;
            cout<<n<<" ";
            }    
        }
        cout<<endl;
        
    }
    
    return 0;
}
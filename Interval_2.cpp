#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int in = 0,out = 0;
    for (int i = 0; i < t; i++)
    {
    int n;
    cin>>n;
        if (n >= 10 && n <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    cout<<in<<" in"<<endl<<out<<" out"<<endl;  
    
    
    return 0;
}


   
  

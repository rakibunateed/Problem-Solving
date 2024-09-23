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
    cin>>t;
    string str;
    int count = 0;
    for (int i = 0; i < t; i++)
    {
       cin>>str;
       if (str =="X++" || str =="++X")
       {
        count ++;
       }
       if (str =="X--" || str =="--X")
       {
        count --;
       }   
    }
    cout<<count<<endl;
    return 0;
}
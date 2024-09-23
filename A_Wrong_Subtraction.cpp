#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int temp = n,find;
for (int i = 0; i < k; i++)
{
    find = temp % 10;
        if (find == 0)
        {
            temp = temp / 10;
        }
        if (find >= 1)
        {
            temp --;
        }
}    
        cout<<temp<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    double x,result;
    cin>>x;
    int temp = x;
    result = x - temp;
    if (result < .500)
    {
       cout<<floor(x)<<endl;
    }
    else if (result >= .500)
    {
       cout<<ceil(x)<<endl;
    }
   
  return 0;
}
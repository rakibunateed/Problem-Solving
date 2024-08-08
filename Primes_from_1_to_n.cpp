#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

bool isPrime(int n)
{
    if (n<=1)
    {
        return false;
    }
    
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }   
    } 
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin >> N;
  
    for (int i = 1; i <=N; i++)
    {
        if (isPrime(i))
        {
           cout<<i<<" ";
        }
       
    }
    return 0;
}
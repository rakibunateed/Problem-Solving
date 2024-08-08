#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int sumOfDigit(int n)
{
    int sum = 0;
    while (n>0)
    {
        sum += n%10;
        n/=10;
    }
    
    
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll N,A,B;
    cin >> N>>A>>B;
    int totalSum = 0;
    for (int  i = 1; i <=N; i++)
    {
        int digitSum = sumOfDigit(i);
        if (digitSum >= A && digitSum <= B)
        {
            totalSum +=i;
        }
        
    }
    cout<<totalSum<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    double n,sum = 0,avg;
    int positive = 0;
    for (int i = 0; i < 6; i++)
    {
        cin>>n;
        if (n > 0)
        {
            sum+= n;
            ++positive;   
        }  
    }
    avg = sum / positive;
    cout<<fixed<<setprecision(1);
    cout<<positive<<" valores positivos"<<endl<<avg<<endl;; 
    return 0;
}
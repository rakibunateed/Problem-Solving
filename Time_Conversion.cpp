#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,h,m,s;
    cin>>n;
    s = (n % 60) % 60;
    m = (n / 60) % 60;
    h = (n / 60) / 60;

    cout<< h <<":"<< m <<":"<< s << endl;
    return 0;
}
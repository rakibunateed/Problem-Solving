#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N,y,m,d;
    cin>>N;
    y = (N / 365);
    m = (N % 365) / 30;
    d = (N % 365) % 30;

    cout<<y<<" years"<<endl<<m<<" months"<<endl<<d<<" days"<<endl;
    
    return 0;
}
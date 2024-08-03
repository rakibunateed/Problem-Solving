#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll palindrome(int p){
    ll temp2 = p;
    ll r ;
    ll sum =0;
    while (temp2 !=0)
    {
        r = temp2 % 10 ;
        sum = sum*10 + r;
        temp2 = temp2 /10;   
    }
    return sum == p;

}
void wonderful(ll num){
    if (num % 2 !=0 && palindrome(num))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
          
}
int main(){
    ll N;
    cin>>N;
    wonderful(N);
    return 0;
}
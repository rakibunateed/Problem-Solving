#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
void palindrome(int p){
    ll temp2 = p;
    ll reminder ;
    ll sum =0;
    while (temp2 !=0)
    {
        reminder = temp2 % 10 ;
        sum = sum*10 + reminder;
        temp2 = temp2 /10;   
    }
    if (sum == p)
    {
      if (p % 2 !=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
    cout<<"NO"<<endl;
    }
    }   
    else
    {
    cout<<"NO"<<endl;
    }
    
}
void odd(int i){
    ll temp = i;
    palindrome(temp);           
}
int main(){
    ll N;
    cin>>N;
    odd(N);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int pos = 0; int neg = 0;
    int even = 0; int odd = 0;
    
    for (int i = 0; i < N; i++)
    {
        int X;
        cin>>X;
        if (X % 2 == 0)
        {
            ++even; 
        }
        else
        {
            ++odd;   
        }
        if (X > 0)
        {
            ++pos;
        }
        else if (X < 0)
        {
            ++neg;
        }     
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
    return 0;
}
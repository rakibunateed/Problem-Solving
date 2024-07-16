#include<bits/stdc++.h>
using namespace std;

int main(){
    long long pass = 1999;
    while (true)
    {
        long long X;
        cin>>X;
        if (X == pass)
        {
           cout<<"Correct"<<endl;
           break;
        }
        else
        {
            cout<<"Wrong"<<endl;    
        }  
    }
    return 0;
}
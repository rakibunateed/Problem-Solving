#include<bits/stdc++.h>
using namespace std;

int main(){
    char X;
    cin>>X;
    if (X>='A' && X<='Z')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    }
    else if (X>='a' && X<='z')
    {
        cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
    }
    else
    {
        cout<<"IS DIGIT"<<endl;
    }
    
    return 0;
}
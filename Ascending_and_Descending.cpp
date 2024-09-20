#include<bits/stdc++.h>
using namespace std;

int main(){
    while (true)
    {
        int x,y;
        cin>>x>>y;

        if (x == y)
        {
           break;
        }
        else if (x > y)
        {
            cout<<"Decrescente"<<endl; 
        }
        else 
        {
            cout<<"Crescente"<<endl;    
        }  
    }
    return 0;
}
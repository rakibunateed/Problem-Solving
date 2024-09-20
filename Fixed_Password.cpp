#include<bits/stdc++.h>
using namespace std;

int main(){
    long long pass = 2002;
    while (true)
    {
        long long X;
        cin>>X;
        if (X == pass)
        {
           cout<<"Acesso Permitido"<<endl;
           break;
        }
        else
        {
            cout<<"Senha Invalida"<<endl;    
        }  
    }
    return 0;
}
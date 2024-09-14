#include<bits/stdc++.h>
using namespace std;

int main(){
    double X;
    cin>>X;
    if (X >= 0 && X <=25)
    {
        cout<<"Intervalo "<<"[0,25]"<<endl;
    }
    else if (X > 25 && X <=50)
    {
        cout<<"Intervalo "<<"(25,50]"<<endl;
    }
    else if (X > 50 && X <=75)
    {
        cout<<"Intervalo "<<"(50,75]"<<endl;
    }
    else if (X > 75 && X <=100)
    {
        cout<<"Intervalo "<<"(75,100]"<<endl;
    }
    else
    {
        cout<<"Fora de intervalo"<<endl;
    }
    return 0;
}
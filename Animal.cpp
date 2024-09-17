#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name1,name2,name3;
    cin>>name1>>name2>>name3;

    if (name1 == "vertebrado")
    {
        if (name2 == "ave")
        {
           if (name3 == "carnivoro")
           {
            cout<<"aguia"<<endl;
           }
           else{
            cout<<"pomba"<<endl;
           }
        }
        else
        {
            if (name3 == "onivoro")
            {
                cout<<"homem"<<endl;
            }
            else{
                cout<<"vaca"<<endl;
            } 
        } 
    }
    else
    {
        if (name2 == "inseto")
        {
           if (name3 == "hematofago")
           {
            cout<<"pulga"<<endl;
           }
           else{
            cout<<"lagarta"<<endl;
           }
        }
        else
        {
            if (name3 == "hematofago")
            {
                cout<<"sanguessuga"<<endl;
            }
            else{
                cout<<"minhoca"<<endl;
            } 
        } 
    }
    return 0;
}
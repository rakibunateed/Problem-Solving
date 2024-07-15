#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if (ch>='A' && ch<='Z')
    {
        cout<<(char)tolower(ch)<<endl;
    }
    else if (ch>='a' && ch<='z')
    {
        cout<<(char)toupper(ch)<<endl;
    }
    return 0;
}
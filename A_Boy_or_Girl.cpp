#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    set<char>st;
    for (int i = 0; i < str.size(); i++)
    {
        st.insert(str[i]);  
    }
    if (st.size() % 2 ==0)
       {
        cout<<"CHAT WITH HER!"<<endl;
       }
       else cout<<"IGNORE HIM!"<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
char upper(char c)
{return 'a'+ (c-'A');
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	while(1){
		cin>>s;
			if(s.size()==0){
			break;
		}
		for(int i = 0;i<s.size();i++){
			s[i]=upper(s[i]);
			}
		cout<<s<<endl;
	}
	return 0;
}
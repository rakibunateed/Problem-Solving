#include<bits/stdc++.h>
using namespace std;

int main(){
 

	long long A,B,C,result;
	char S,Q;

	cin>>A>>S>>B>>Q>>C;
		bool correct = false;
	
	
	if(S == '+' && Q == '=')
	{
		result = A+B;
		if(result == C)
		{
			correct = true;
		}
	}
	else if(S == '-' && Q == '=')
	{
		result = A-B;
		if(result == C)
		{
			correct = true;
		}
	}
	else if(S == '*' && Q == '=')
	{
		result = A*B;
		if(result == C)
		{
			correct =true;
		}
	}
	
		if(correct)
    {
		  cout<<"Yes"<<endl;
		}
	  else
    {
	    cout<<result<<endl;
	  }
  
  return 0;
}

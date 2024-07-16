#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C,D,result;
    cin>>A>>B>>C>>D;
    result = A*B*C*D;
    cout<<(result % 100)<<endl;
    return 0;
}
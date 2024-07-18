#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
void swap(int A,int B){
    int temp;
    temp = A;
    A = B;
    B = temp;
    cout<<A<<" "<<B<<endl;
}

int main(){
    int X,Y;
    cin>>X>>Y;
    swap(X,Y);
    return 0;
}
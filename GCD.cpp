#include<bits/stdc++.h>
#include <algorithm> 
using namespace std;

typedef long long int ll;
void GCD(int X,int Y){
    // int m1 = -1;
    // int m2 = -2;

    // for (int i = 1; i < X; i++)
    // {
    //     if (X % i == 0)
    //     {
    //         m1 = i;  
           
    //     } 
         
    // }

    // for (int j = 1; j < Y; j++)
    // {
    //     if (Y % j == 0)
    //     {
    //        m2 = j; 
    //     }
    // }
    // int result = m1-m2;
    // cout<<result;
    // // if (m1 == m2)
    // // {
    // //      cout<<max(m1,m2)<<endl;;
    // // }
    
  

    int result = __gcd(X,Y);
    cout<<result;
}

int main(){
    int A ,B;
    cin>>A>>B;
    GCD(A,B);
    return 0;
}
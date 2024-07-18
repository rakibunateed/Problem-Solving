#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long int ll;
void result(double X,double Y){


    double isResult = (X / Y);

    double isFloor = floor(isResult);
    double isCeil = ceil(isResult);
    double isRound = round(isResult);

    cout<<X<<" / "<<Y<<" = "<<isFloor<<endl;
    cout<<X<<" / "<<Y<<" = "<<isCeil<<endl;
    cout<<X<<" / "<<Y<<" = "<<isRound<<endl;
    
}

int main(){
    double A,B;
    cin>>A>>B;
    result(A,B);

    return 0;
}
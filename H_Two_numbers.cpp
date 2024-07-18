#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long int ll;

int main(){
    double A,B;
    cin>>A>>B;

    double result = (A/B);
    double isFloor = floor(result);
    double isCeil = ceil(result);
    double isRound = round(result);

    cout<<"floor "<<A<<" / "<<B<<" = "<<isFloor<<endl;
    cout<<"ceil "<<A<<" / "<<B<<" = "<<isCeil<<endl;
    cout<<"round "<<A<<" / "<<B<<" = "<<isRound<<endl;
    return 0;
}
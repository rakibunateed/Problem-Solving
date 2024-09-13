#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1,y1,result;
    cin>>x1>>y1;

    double x2,y2;
    cin>>x2>>y2;

    cout<<fixed<<setprecision(4);
    result = sqrt((((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)))); 
    cout<<result<<endl; 
    return 0;
}
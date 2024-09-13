#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    double salary,sold,total,bonus;
    cin>>name>>salary>>sold;

    bonus = sold* (15/100.00);
    total = salary + bonus;

    cout<<fixed<<setprecision(2);
    cout<< "TOTAL = R$ " << total <<endl;
    return 0;
}
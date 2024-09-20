#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    double n1,n2,n3,n4,n5,avg,secondAvg;
    cin>>n1>>n2>>n3>>n4>>n5;
    cout<<fixed<<setprecision(1);

    avg = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10.0;
    secondAvg = (avg + n5) / 2.0;
    
    if (avg >= 7.0)
    {
        cout<<"Media: "<<avg<<endl<<"Aluno aprovado."<<endl;
    }
    if (avg < 5.0)
    {
        cout<<"Media: "<<avg<<endl<<"Aluno reprovado."<<endl;
    }
    if (avg >= 5.0 && avg <= 6.9)
    {
        cout<<"Media: "<<avg<<endl<<"Aluno em exame."<<endl;
    }
    if (n5 >= 0.1)
    {
        cout<<"Nota do exame: "<<n5<<endl;
    }
    if (n5 >= 0.1 && secondAvg >= 5.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    if (n5 >= 0.1 && secondAvg <= 4.9)
    {
        cout<<"Aluno reprovado"<<endl;
    }
    if (n5 >= 0.1 && secondAvg)
    {
        cout<<"Media final: "<<secondAvg<<endl;
    }
    return 0;
}
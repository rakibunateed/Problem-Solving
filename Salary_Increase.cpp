#include <bits/stdc++.h>
using namespace std;

int main()
{
     double salary,first;
     cin>>salary;
     cout<<fixed<<setprecision(2);
     
     if (salary <= 400.00)
     {
        first = salary * (15/100.00);
        salary += first;

        cout<<"Novo salario: "<<salary<<endl<<"Reajuste ganho: "<<first<<endl<<"Em percentual: 15 %"<<endl;;
     }
     else if (salary >= 400.01 && salary <= 800.00)
     {
         first = salary * (12/100.00);
        salary += first;

        cout<<"Novo salario: "<<salary<<endl<<"Reajuste ganho: "<<first<<endl<<"Em percentual: 12 %"<<endl;;
     }
     else if (salary >= 800.01 && salary <= 1200.00)
     {
         first = salary * (10/100.00);
        salary += first;

        cout<<"Novo salario: "<<salary<<endl<<"Reajuste ganho: "<<first<<endl<<"Em percentual: 10 %"<<endl;;
     }
     else if (salary >= 1200.01 && salary <= 2000.00)
     {
         first = salary * (7/100.00);
        salary += first;

        cout<<"Novo salario: "<<salary<<endl<<"Reajuste ganho: "<<first<<endl<<"Em percentual: 7 %"<<endl;;
     }
     else if (salary > 2000.00)
     {
         first = salary * (4/100.00);
        salary += first;

        cout<<"Novo salario: "<<salary<<endl<<"Reajuste ganho: "<<first<<endl<<"Em percentual: 4 %"<<endl;;
     }
     
    return 0;
}
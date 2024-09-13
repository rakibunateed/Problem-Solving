#include <bits/stdc++.h>
using namespace std;

int main()
{
   double A,B,C,pi = 3.14159;
   cin>>A>>B>>C;
   double triangle,circle,trapezium,square,rectangle;

   triangle = (1/2.0)* A * C;
   circle = pi * C * C;
   trapezium = (1/2.0)* (A + B)* C;
   square = B * B;
   rectangle = A * B;

   cout<<fixed<<setprecision(3);
   
   cout<<"TRIANGULO: "<< triangle << endl <<"CIRCULO: "<< circle << endl << "TRAPEZIO: "<< trapezium << endl <<"QUADRADO: "<< square << endl <<"RETANGULO: "<< rectangle << endl;
    return 0;
}
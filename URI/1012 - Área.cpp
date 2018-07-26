#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c, triangulo,circulo,trapezio,quadrado,retangulo;
    cin >> a;
    cin >> b;
    cin >> c;
    triangulo = (a * c)/2;
    circulo = c*c*3.14159;
    trapezio = ((a+b)* c)/ 2;
    quadrado = b * b;
    retangulo = a * b;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: "  << triangulo  << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio<< endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo<< endl;
    return 0;
}

// Ejercicio 110: convertir grados (corregido)
// Convierte grados Celsius a Fahrenheit
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double c; if(!(cin>>c)) return 0;
    double f = c*9.0/5.0 + 32.0;
    cout<<fixed<<setprecision(2)<<f<<endl;
    return 0;
}
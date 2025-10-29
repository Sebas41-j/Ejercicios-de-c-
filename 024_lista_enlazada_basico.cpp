// Ejercicio 024: lista enlazada (basico)
// Calcula precio con descuento: lee precio y porcentaje (0-100)
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double precio, pct;
    if(!(cin>>precio>>pct)) return 0;
    double finalp = precio * (1 - pct/100.0);
    cout<<fixed<<setprecision(2)<<finalp<<endl;
    return 0;
}
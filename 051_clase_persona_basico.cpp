// Ejercicio 051: clase persona (basico)
// Simula un cajero sencillo: lee precio y cantidad, muestra total y recibe pago
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double precio; int cantidad;
    if(!(cin>>precio>>cantidad)) return 0;
    double total = precio * cantidad;
    cout<<fixed<<setprecision(2)<<total<<endl;
    double pago; if(cin>>pago) cout<<fixed<<setprecision(2)<<pago - total<<endl;
    return 0;
}
// Ejercicio 227: buscar binario (intermedio)
// Calcula factorial de n (n<=20)
#include <iostream>
using namespace std;
int main() {
    int n; if(!(cin>>n)) return 0;
    unsigned long long r=1;
    for(int i=2;i<=n;i++) r*=i;
    cout<<r<<endl;
    return 0;
}
// Ejercicio 315: radix sort (intermedio)
// Comprueba si un número es primo
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n; if(!(cin>>n)) return 0;
    if(n<2) { cout<<"NO
"; return 0; }
    for(long long i=2;i*i<=n;i++) if(n%i==0) { cout<<"NO\n"; return 0; }
    cout<<"SI\n";
    return 0;
}
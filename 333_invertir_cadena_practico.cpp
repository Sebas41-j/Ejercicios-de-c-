// Ejercicio 333: invertir cadena (practico)
// Lee N y luego N nombres de artículos, muestra conteo total
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; if(!(cin>>N)) return 0;
    string s; getline(cin,s);
    int count=0;
    for(int i=0;i<N;i++){ getline(cin,s); if(!s.empty()) count++; }
    cout<<count<<endl;
    return 0;
}
// Ejercicio 090: compresion basica (basico)
// Calcula el promedio de N estudiantes (entrada: N y luego N notas)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; if(!(cin>>N)) return 0;
    double sum=0;
    for(int i=0;i<N;i++){ double x; cin>>x; sum+=x; }
    if(N>0) cout<<fixed<<setprecision(2)<<sum/N<<endl;
    return 0;
}
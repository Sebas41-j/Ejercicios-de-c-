// Ejercicio 029: mediana (basico)
// Lee N y N enteros, los ordena y muestra en una línea
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; if(!(cin>>N)) return 0;
    vector<int>a(N);
    for(int i=0;i<N;i++) cin>>a[i];
    sort(a.begin(), a.end());
    for(int i=0;i<N;i++) {
        if(i) cout<<" ";
        cout<<a[i];
    }
    cout<<"\n";
    return 0;
}
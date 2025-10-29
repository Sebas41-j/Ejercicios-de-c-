// Ejercicio 196: rabin karp (avanzado)
// Imprime los primeros N términos de Fibonacci
#include <iostream>
using namespace std;
int main() {
    int N; if(!(cin>>N)) return 0;
    long long a=0,b=1;
    for(int i=0;i<N;i++) {
        cout<<a;
        if(i+1<N) cout<<" ";
        long long c=a+b; a=b; b=c;
    }
    cout<<"\n";
    return 0;
}
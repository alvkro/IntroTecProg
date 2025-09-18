//Dado um valor N e uma sequência de N valores inteiros, imprimir a moda da
//sequência (em estatística, moda é o valor que aparece mais vezes)

#include <iostream>
using namespace std;

int main(){
    int n;
    int contador = 0;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (v[i] == v[j]){
                contador++;
            }
        }
    }
    cout << contador;
    return 0;
}
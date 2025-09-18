#include <iostream>
using namespace std;

//Dado um valor N e uma sequência de N valores inteiros, imprimir a menor
//diferença entre dois valores da sequência.

int main(){
    int n;
    int menor_diferenca = 0;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int diff = v[i] - v[j];
            if (diff < 0){
                diff *= -1;
            }
            if (diff < menor_diferenca){
                menor_diferenca = diff;
            }
    }
    cout << menor_diferenca;
    return 0;
    }
}
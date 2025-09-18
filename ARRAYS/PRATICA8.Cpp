//Dados dois valores M e N e duas sequências de valores inteiros de
//tamanhos M e N, imprimir os valores que se encontram em ambas
//sequências

#include <iostream>
using namespace std;

int main(){
    int m, n; // VALORES
    int M, N; // TAMANHO DO VETOR
    cin >> m >> n;
    cin >> M >> N;
    int v1[M], v2[N];

    for (int i = 0; i < M; i++){
        cin >> v1[i];
    }

    for (int i = 0; i < N; i++){
        cin >> v2[i];
    }

    for (int k = 0; k < M; k++){ /*ACESSAR O VALOR DO VETOR -> VERIFICAR SE ESTÃO NAS DUAS SEQUENCIAS.*/ 
        for (int l = 0; l < N; l++){
        if (v1[k] == m && v2[l] == m) {
            cout << 
        }
    }

}

    return 0;
}
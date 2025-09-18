#include <iostream>
using namespace std;

// Matrizes (2x2) são arrays que recebem duas informações:
// Matriz[i][j] -> i = linha; j= coluna (tremo de medo só de lembrar de VGA)
// Isso significa que será uma array de i * j elementos!

int main () {
    int m, n;
    cin >> m, n;
    int mat[m][n];

    // Para receber uma matriz m x n

    for (int coluna = 0; coluna < n; coluna++) {
        for (int linha = 0; linha < m; linha++) {
            cin >> mat[linha][coluna];
        }
    }

    // Para imprimir uma matriz m x n

    for (int coluna = 0; coluna < n; coluna++) {
        for (int linha = 0; linha < m; linha++) {
            cout << mat[linha][coluna];
        }
        cout << "\n";
    }
}
#include <iostream>
using namespace std;


int main () {
    int m, n;
    cin >> m >> n;
    int matA[m][n];

    int m1, n1;
    cin >> m1 >> n1;
    int matB[m1][n1];

    // MATRIZ A

    for (int coluna = 0; coluna < n; coluna++) {
        for (int linha = 0; linha < m; linha++) {
            cin >> matA[linha][coluna];
        }
    }

    // MATRIZ B

    for (int coluna1 = 0; coluna1 < n1; coluna1++) {
        for (int linha1 = 0; linha1 < m1; linha1++) {
            cin >> matB[linha1][coluna1];
        }
    }

    for (int coluna = 0; coluna < n; coluna++) {
        for (int linha = 0; linha < m; linha++) {
            cout << (matA[linha][coluna] + matB[linha][coluna]) << " ";
        }
        cout << "\n";
    }

    }

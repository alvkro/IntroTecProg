#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int mat[m][n];

    for (int i = 0; i < n; i++) { //coluna
        for (int j = 0; j < m; j++) { //linha
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) { //coluna
        for (int j = 0; j < m; j++) { //linha
            mat[i] == mat[j];
        }
    }

    for (int i = 0; i < n; i++) { //coluna
        for (int j = 0; j < m; j++) { //linha
            cout << mat[i][j] << " ";
        }
        printf("\n");
    }

    return 0;
}
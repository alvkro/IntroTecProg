#include <iostream>
using namespace std;

int main() {
    int mat[2][2];
    int total = 0;

    for (int i = 0; i < 2; i++) { //coluna
        for (int j = 0; j < 2; j++) { //linha
            cin >> mat[i][j];
            total += mat[i][j];
        }
    }
    printf("Matriz: \n");
    for (int i = 0; i < 2; i++) { //coluna
        for (int j = 0; j < 2; j++) { //linha
            cout << mat[i][j] << " ";
        }
        printf("\n");
    }
    printf("Soma dos elementos: %i", total);

    return 0;
}
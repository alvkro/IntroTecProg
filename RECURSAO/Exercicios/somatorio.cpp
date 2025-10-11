#include <iostream>
using namespace std;

int somatorio(int tam, int sequencia[]) {
    if (tam == 1) {
        return sequencia[0];
    }
    else {
        return sequencia[tam - 1] + somatorio(tam - 1, sequencia);
    }
}

int main() {
    int tam;
    cin >> tam;
    int arr[tam];

    for (int i = 0; i < tam; i++) {
        cin >> arr[i];
    }
    cout << somatorio(tam, arr) << endl;

    return 0;
}
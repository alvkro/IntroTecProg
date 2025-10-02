#include <iostream>
using namespace std;

void mdc(int a, int b) {
    int maiorValor = 0;
    int resultado = 0;
    if (a > b) {
        maiorValor += a;
    }
    else {
        maiorValor += b;
    }

    for (int i = 1; i <= maiorValor; i++) {
        if (a % i == 0 && b % i == 0) {
            resultado = i;
        }
    }
    cout << resultado << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    mdc(a, b);

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

// USO DE PATTERN MATCHING!!!

bool isLetras(string str) {
    for (int i = 0; i < 3; i++) {
        if (str[i] < 'A' || str[i] > 'Z' ) {
            return false;
        }
    }
    if (str[3] != '-') {
        return false;
    }
    return true;
}

bool isNumeros(string num) {
        for (int i = 4; i <= 7; i++) {
            if (num[i] < '0' || num[i] > '9') {
                return false;
            }
        }
        return true;
    }

int main() {
    string placa;
    getline(cin, placa);

    if (isLetras(placa) == true && isNumeros(placa) == true) {
        cout << "sim\n";
    }
    else {
        cout << "não\n";
    }

    return 0;
}
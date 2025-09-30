#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra;
    cin >> palavra;
    int contador = 0;

    for (int i = 0; i < palavra.length(); i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' || palavra[i] == 'y') {
            contador++;
        }
    }
    cout << contador;
    return 0;
}
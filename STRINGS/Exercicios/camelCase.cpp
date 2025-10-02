#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string lowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    string texto;
    getline(cin, texto);
    texto = lowerCase(texto);
    int pos = 0;

    for (int i = 0; i < texto.size() - 1; i++) {
        if (texto[i] == ' ') {
            texto.erase(i, 1);
        }
        else {
            texto[i] = toupper(texto[i]);
        }
    }

    cout << texto << endl;

    return 0;
}
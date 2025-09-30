#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string lowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    string palavra, frase;
    int contador = 0;
    getline(cin, frase);
    cin >> palavra;

    string frase_min = lowerCase(frase);
    string palavra_min = lowerCase(palavra);

    int position = frase.find(palavra_min);

    while (position != -1) {
        contador++;
        position = frase_min.find(palavra_min, position + 1);
    }

    cout << contador << endl;

    return 0;
}
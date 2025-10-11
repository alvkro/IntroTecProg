#include <iostream>
#include <string>
using namespace std;

int nCaracteres(string str, int index = 0) {
    if(str[index] == '\0') {
        return 0;
    }
    else {
        return 1 + nCaracteres(str, index + 1);
    }
}

int main() {
    string frase;
    getline(cin, frase);

    cout << nCaracteres(frase) << endl;

    return 0;
}
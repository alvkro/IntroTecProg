#include <iostream>
#include <string>
using namespace std;

char numLetra(int Num) {
    if (Num >= 1 && Num <= 26) {
        return (Num + 96); // 64 é o número do A na tabela ASCII
    }
    else {
        return '?';
    }
}

int letraNum(char Letra) {
    Letra = tolower(Letra);
    if (Letra >= 'a' && Letra <= 'z') {
        return (Letra - 96);
    }
    else {
        return -1;
    }
}

void criptCeasar(string str, int n) {
    for (int i = 0; i < str.size(); i++) {
        int num = letraNum(str[i]); // letra para numero *
        int x = num + n; // realiza a op. para obter o ASCII da letra da cifra *
        x = ((x - 1) % 26) + 1; // loop para manter no alfabeto
        char letra = numLetra(x); // converte o numero para letra
        str[i] = letra; // substitui a letra antiga para a nova
    }
    cout << str << endl;
}

int main() {
    string texto;
    getline(cin, texto);
    int desloc;
    cin >> desloc;
    criptCeasar(texto, desloc);

    return 0;
}
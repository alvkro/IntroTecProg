#include <iostream>
using namespace std;

int main() {
    string texto;
    getline(cin, texto);
    int empty = 0;

    for (int i = 0; i < texto.size(); i++) { //esquerda -> direita
        if (texto[i] == ' ') {
            empty++;
        }
        else {
            break;
        }
    }

    texto.erase(0, empty);
    empty = 0;

    for (int i = texto.size() - 1; i > texto.size(); i--) {
        if (texto[i] == ' ') {
            empty++;
        }
        else {
            break;
        }
    }
    
    cout << texto << endl;

    return 0;
}
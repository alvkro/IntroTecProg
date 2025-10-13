#include <iostream>
using namespace std;

const int MAX_SIZE = 25;

struct Histograma {
    unsigned int dados[MAX_SIZE];
};

struct Plateau {
    unsigned int rate_inicial;
    unsigned int rate_final;
    unsigned int freq;
};

Plateau FindPlateau(const Histograma& hist) {
    Plateau resultado;
    bool findStart = false;

    for (int i = 0; i < MAX_SIZE - 1; i++) {
        if (!findStart && hist.dados[i] == hist.dados[i+1]) {
            resultado.rate_inicial = i;
            resultado.freq = hist.dados[i];
            findStart = true;
        }
        else if (findStart && hist.dados[i] != hist.dados[i + 1]) {
            resultado.rate_final = i;
            break;
        }
    }
    return resultado;
}

int main() {
    Histograma arr1;
    for (int i = 0; i < MAX_SIZE; i++) {
        cin >> arr1.dados[i];
    }

    Plateau resultado_final = FindPlateau(arr1);

    cout << "Frequência:" << resultado_final.freq << endl;
    cout << "Indice inicial:" << resultado_final.rate_inicial << endl;
    cout << "Indice final:" << resultado_final.rate_final << endl;

    return 0;
}
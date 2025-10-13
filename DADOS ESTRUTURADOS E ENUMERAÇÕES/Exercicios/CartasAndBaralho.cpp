#include <iostream>
using namespace std;

enum ValorCarta {
    AS, C2, C3, C4, C5, C6, C7, C8, C9, C10, J, Q, K
};

enum NaipeCarta {
    Ouro, Copas, Paus, Espadas
};

struct Carta {
    ValorCarta valor;
    NaipeCarta naipe;
};

struct Cartas {
    int quantidade;
    Carta cartas[52];
};

bool temJogo (const Cartas &cartas) {
    for (int i = 0; i < cartas.quantidade - 2; i++) {
        Carta c1 = cartas.cartas[i];
        Carta c2 = cartas.cartas[i+1];
        Carta c3 = cartas.cartas[i+2];
        bool mesmoNaipe = c1.naipe == c2.naipe && c2.naipe == c3.naipe;
        bool ehSequencia = c1.valor+1 == c2.valor && c2.valor+1 == c3.valor;

        if (mesmoNaipe && ehSequencia) {
            return true;
        }
    }
    return false;
}

int main() {
    Carta c = {AS, Ouro};

    Carta Hand = {
        3,
        {
            {Q, Espadas},
            {C3, Espadas}
        }
    };


}
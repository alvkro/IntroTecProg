#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct InfoLivro {
    vector <string> autores;
    vector <string> titulos;
    unsigned int ano_publicacao;
    unsigned int quantidade_paginas;
    bool isDisponivel;
};

void RegistrarLivros(InfoLivro& info) {
    int quantidade;
    cin >> quantidade;
    for (int i = 0; i < quantidade; i++) {
        // Registrar livros
        string livro_t;
        getline(cin, livro_t);
        info.titulos.push_back(livro_t);
        // Registrar autores
        string autor_t;
        getline(cin, autor_t);
        info.autores.push_back(autor_t);
    }
}

int main() {

    return 0;
}
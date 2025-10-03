#include <iostream>
using namespace std;

int main() {
    int Numero = 234;
    void* ptr = &Numero;
    void* ptr2 = &ptr;
    *(int*)ptr = 1456;

    cout << *(int*)ptr << endl;
    return 0;
}

/*Crie um outro ponteiro e faça-o apontar para a
mesma variável que ptr aponta*/
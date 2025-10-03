#include <iostream>
using namespace std;

int main() {
    int Numero = 234;
    void* ptr = &Numero;
    

    cout << *(int*)ptr << endl;

    return 0;
}

/*Crie uma variavel e inicialize um
valor igual a 234*/
/*Crie um ponteiro capaz de apontar para
uma variavel do tipo inteiro*/
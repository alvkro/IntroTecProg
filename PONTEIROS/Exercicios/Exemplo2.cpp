#include <iostream>
using namespace std;

int main() {
    int Numero = 234;
    void* ptr = &Numero;
    *(int*)ptr = 1456;

    cout << *(int*)ptr << endl;
    return 0;
}

/*Troque o valor para 1456 usando ponteiros*/

#include <iostream>
using namespace std;

int main() {
    int Numero = 234;
    void* ptr = &Numero;
    *(int*)ptr += 200;

    cout << *(int*)ptr << endl;
    return 0;
}

/*Soma 200 ao valor contido em número*/
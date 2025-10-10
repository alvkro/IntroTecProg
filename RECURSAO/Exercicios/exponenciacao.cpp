#include <iostream>
using namespace std;

int potencia(int base, int expoente){
    if(expoente == 0){
        return 1;
    }
    else {
        return base * potencia(base, expoente - 1);
    }
}

int main(){
    int base, expoente;
    cin >> base >> expoente;
    cout << potencia(base, expoente) << endl;
    return 0;
}
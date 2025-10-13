#include <iostream>
using namespace std;

struct Fracao {
    int numerador;
    int denominador;
};

double multFrac (Fracao n1, Fracao n2) {
    int Num1 = n1.numerador;
    int Den1 = n1.denominador;

    int Num2 = n2.numerador;
    int Den2 = n2.denominador;
    
    int Num = Num1 * Num2;
    int Den = Den1 * Den2; 

    return Num/Den;
}

int main() {
    Fracao frac1, frac2;
    cin >> frac1.numerador >> frac1.denominador;

    cin >> frac2.numerador >> frac2.denominador;

    cout << multFrac(frac1, frac2) << endl;

    return 0;
}
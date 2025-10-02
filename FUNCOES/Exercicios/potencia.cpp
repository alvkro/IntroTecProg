#include <iostream>
using namespace std;

int pow(int base, int expo) { // te amo recursão
    if (expo == 0) {
        return 1;
    }
    else {
        return base * pow(base, expo - 1);
    }
}

int main() {
    int base, expo;
    cin >> base >> expo;

    cout << pow(base, expo) << endl;

    return 0;
}
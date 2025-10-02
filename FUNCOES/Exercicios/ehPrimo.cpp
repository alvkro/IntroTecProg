#include <iostream>
using namespace std;

bool ehPrimo(int n) { // ???????
    if (n % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    if (ehPrimo(n) == true) {
        cout << "é primo\n";
    }
    else {
        cout << "não é primo\n";
    }

    return 0;
}
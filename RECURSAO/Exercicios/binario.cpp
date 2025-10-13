#include <iostream>
using namespace std;

int numberToBinary(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n == 0) {
        return 0;
    }
    else {
        return (numberToBinary(n / 2) * 10) + (n % 2);
    }
}

int main() {
    int n;
    cin >> n;

    cout << numberToBinary(n) << endl;

    return 0;
}
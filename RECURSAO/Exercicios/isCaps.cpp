#include <iostream>
#include <string>
using namespace std;

int isCaps(string str, int index = 0) {
    if (str[index] == '\0') {
        return 0;
    }
    else if (str[index] >= 'A' && str[index] <= 'Z') {
        return 1 + isCaps(str, index + 1);
    }
    else {
        return 0 + isCaps(str, index + 1);
    }
}

int main() {
    string frase;
    getline(cin, frase);

    cout << isCaps(frase) << endl;

    return 0;
}
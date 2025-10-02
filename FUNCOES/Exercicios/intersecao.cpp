#include <iostream>
using namespace std;

bool temIntersecao(int arr1[], int tamanho1, int arr2[], int tamanho2) {
    for (int i = 0; i < tamanho1; i++) {
        for (int j = 0; j < tamanho2; j++) {
            if (arr1[i] == arr2[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t1, t2;
    cin >> t1 >> t2;

    int arr1[t1];
    int arr2[t2];

    for (int i = 0; i < t1; i++) {
        cin >> arr1[t1];
    }

    for (int i = 0; i < t2; i++) {
        cin >> arr2[t2];
    }

    cout << temIntersecao(arr1, t1, arr2, t2) << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    
    int v1[n];
    int v2[m];

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    for (int i = 0; i < n; i++) {
        if (v1[i] != v2[i + 1] || v1[i] == v2[i + 1]) {
            cout << v1[i] << " ";
        }
        else if (v2[i] != v1[i + 1])
            cout << v2[i] << " ";
    }
    return 0;
    }
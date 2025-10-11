#include <iostream>
using namespace std;

bool isThere(int num, int x, int seq[]) {
    if (num <= 0) {
        return false;
    }
    else if (x == seq[num - 1]){
        return true;
    }
    else {
        return isThere(num - 1, x, seq);
    }
    return false;
}

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++) {
       cin >> arr[i]; 
    }

    cout << isThere(n, x, arr) << endl;

    return 0;
}
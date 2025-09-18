#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    float v[n];
    bool IsDobra = true;

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int i = 0; i < n/2; i++){
        if (v[i] == v[n-1-i]){
            continue;
        }
        else {
            IsDobra = false;
            break;
        }
    }
    if (IsDobra == true){
        cout << "Vetor de dobra\n";
    }
    else {
        cout << "Vetor comum\n";
        
    }
    return 0;
}
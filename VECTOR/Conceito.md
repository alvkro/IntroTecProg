# BIBLIOTECA VECTOR

- Vetores sequência de caracteres (arrays) que podem mudar de tamanho, assim, podemos definir o tamanho de um vetor posteriormente, encolhendo, aumentando...

Exemplo de código:
```cpp
#include <iostream>
#include <vector> // Biblioteca usada!
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3} // Vetor
}
```

# Ações e operações com vetores:
```cpp
    cout << v1[0] << endl; // 1
    cout << v1.front() << endl; // 1 [inicio]
    cout << v1.back() << endl; // 3 [fim]
    cout << v1.size() << endl; // 3 [tamanho]
```

# Flexibilidade de um vetor:
```cpp
    vector<int> v1 {1, 2, 3, 4}
    cout << v1.capacity() << endl; // 4
    v1.push_back(9) // Empurra para o final do vetor o elemento 9. Sempre que essa operação ocorre, o tamanho do vetor DOBRA.
    v1.pop_back() // Remove o último elemento de um vetor.
    v1.shrink_to_fit() // Encolhe o vetor para adequar com a quantidade de elementos.
```

# Inserir e eliminar elementos de um vetor:
```cpp
    v1.insert(v1.begin(), 5)
    //        ^ POSIÇÃO   ^ ELEMENTO
    // Para inserir ou apagar um elemento no início ou fim é assim, porém para uma posição tal, é necessário usar ponteiro (estudar ponteiros)
```

# Iteração de vetores:

```cpp
    for (int i = 0; i < v1.size(); i++) {
        cout  << v1[i] << endl;
    }

    // OU:

    for (auto i = v1.begin(); i != v1.end()) {
        cout << *i << endl;
    }
    return 0;
```
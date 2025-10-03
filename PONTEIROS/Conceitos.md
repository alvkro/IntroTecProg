## Conceitos principais (Relembrando):

## Variáveis:
- Variáveis armazenam dentro delas valores relacionados com seu tipo, junto com um endereço criado na memória RAM, identificador (nome da variável) e o valor armazenado no endereço.

| Endereço | Identificador | Valor armazenado |
|------|-------|--------|
| A34EFDC8 | Numero | 10 |
| A34EFDCC | Salario | 4663.50 |

- Para mostrar o endereço de memória, utiliza-se o operador `&`, o qual ele referencia o endereço de uma certa variável.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    double Salario = 4663.50;

    cout << &n << endl; // Endereço da var n
    cout << &Salario << endl; // Endereço da var Salario

    // Output 1: A34EFDC8
    // Output 2: A34EFDCC

    return 0;
}
```

## Variável Ponteiro:
- Variável especial que armazena um endereço de memória (Carrega um endereço de memória de uma variável)

```cpp
int *ponteiro1;
double* ptr2;
char* ponteiro3;

// A identificação do ponteiro é a partir do asterisco (*).
// Nesse caso, não inicializa ele com nenhum valor, portanto, haverá lixo de memória. Para resolver isso, inicializamos o ponteiro com nulllptr (endereço zero).
```

- Para colocar algo dentro de uma variável, usamos o nome desta variável e o operador de atribuição:

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int *ptr = &n; // ptr tem o valor/endereço de n (ptr -> n)
    *ptr = 103 // o valor de n foi modificado indiretamente a partir do ponteiro (10 -> 103)

    return 0;
}
```

- Se ptr é um ponteiro, então *ptr permite obter o valor que é apontado por ptr (Desreferenciamento de ponteiro)
- Lê-se `*ptr` como o `valor da variável apontada por ptr`, no caso do exemplo acima seria `n`.

# Ponteiros genéricos (void*): 
- Ponteiro que não possui tipo específico para apontar, podendo apontar para um `int`, `char`, `doble`, `bool`...
- No desreferenciamento desse tipo de ponteiro, é necessário especificar o tipo via casting:

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    char l = 'p';

    void *ptrG;
    ptrG = &l;

    cout << *ptrG << endl; // ERRO!
    cout << *(char*)ptrG << endl; // CORRETO! Somente assim ele vai saber quantos bytes ele precisa andar, dependendo do tipo. Isso se chama casting, uma conversão explícita.

    ptrG = &n;
    cout << *(int*)ptrG << endl; // Aqui vai percorrer como um inteiro.

    // *(cast para o tipo desejado*)NomePonteiro;

    return 0;
}
```
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
- Pode ser desrreferenciada diversas vezes durante o código.

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

# Referência:
- É um apelido para variáveis (*int, float, objetos, structs, etc.*), apenas fazem referências a outras coisas.
- *REFERÊNCIA NÃO É UMA VARIÁVEL!* Na memória RAM, o mesmo espaço que vai estar uma variável, vai estar o nome da referência.
- Quando uma referência é criada, ele torna um nome alternativo para aquela variável.
- O valor de endereço de uma variável-referência será igual ao endereço da variável que está sendo referenciada.
- Importante: a referência só pode ser atribuido uma ÚNICA vez por declaração.

Declaração de uma referência:
```cpp
int Numero { 2000 };
int &ref = Numero;
```
# Passagem de argumentos para funções por referência utilizando referências:
- Observe a função abaixo:
```cpp
void TrocaNumero(int Num1, int Num2) {
    int temp = num1;
    num2 = num1;
    temp = num2;
}
```
- Se você for tentar executar essa função no entry point do seu programa, ele vai mudar absolutamente NADA, isto é, não vai trocar os números como proposto. Isso ocorre por causa da execução de `TrocaNumero` e de `main()` ser local, por isso não há mudanças aparentes, após isso eles deixam de existir, chamamos isso de `Passagem de argumentos por valor`, onde apenas uma cópia é enviada para a função. Para mudar, é necessário referenciar os parâmetros dessa função com `&`:
```cpp
void TrocaNumero(int& Num1, int& Num2) {
    int temp = num1;
    num2 = num1;
    temp = num2;
}
```
- Ao identificar um certo parâmetro de uma função como uma referência, o argumento que for colocado para ser usado na função terá o mesmo endereço de memória, efetivamente "retornando" (está entre aspas porque `void` nunca irá retornar nada) o valor que você queria.

# Passagem de argumentos para funções por referência utilizando ponteiros:
- Agora, utilizaremos ponteiros:
```cpp
void TrocaNumero(int* Num1, int* Num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// Na chamada da função:
TrocaNumero(&Numero1, &Numero2);
```
- Neste exemplo, os dois parâmetros da função são ponteiros, sabendo disso, é esperado que recebam dois endereços de memória para ocorrer o desrreferenciamento do ponteiro. Chamamos isso de `Passagem de argumentos para funções por referência utilizando ponteiros`.
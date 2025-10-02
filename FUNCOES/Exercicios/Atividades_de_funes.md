# Funções - atividades

## Potência
Escreva uma função que recebe dois parâmetros, um `double` (b) e um `unsigned int` (e) e retorna a potência do primeiro elevado ao segundo ($b^e$).
```cpp
double potencia(double b, unsigned int e);
```
Exemplo:
```cpp
potencia(2.0, 3); // retorna 8.0
potencia(5.0, 0); // retorna 1.0
```

## Fatorial
Escreva uma função que recebe um número inteiro não negativo e retorna o seu fatorial.
```cpp
unsigned int fatorial(unsigned int n);
```
Exemplo:
```cpp
fatorial(5); // retorna 120
fatorial(0); // retorna 1
```

## Números primos
Escreva uma função que recebe um número inteiro e retorna `true` se o número for primo, ou `false` caso contrário.
```cpp
bool ehPrimo(int n);
```
Exemplo:
```cpp
ehPrimo(7); // retorna true
ehPrimo(10); // retorna false
ehPrimo(1); // retorna false
ehPrimo(2); // retorna true
``` 

## MDC (Máximo Divisor Comum)
Escreva uma função que recebe dois números inteiros e retorna o seu máximo divisor comum (MDC).
```cpp
int mdc(int a, int b);
```
Exemplo:
```cpp
mdc(48, 18); // retorna 6
mdc(101, 10); // retorna 1
```

## Maior valor em um array
Escreva uma função que recebe um array de inteiros e o seu tamanho, e retorna o maior valor presente no array.
```cpp
int maiorValor(int arr[], int tamanho);
```
Exemplo:
```cpp
int arr1[] = {3, 5, 2, 8, 1};
maiorValor(arr1, 5); // retorna 8

int arr2[] = {-1, -5, -3};
maiorValor(arr2, 3); // retorna -1
```

## Tem interseção
Escreva uma função que recebe dois arrays de inteiros e seus respectivos tamanhos, e retorna `true` se houver pelo menos um elemento em comum entre os dois arrays, ou `false` caso contrário.
```cpp
bool temIntersecao(int arr1[], int tamanho1, int arr2[], int tamanho2);
```
Exemplo:
```cpp
int arr1[] = {1, 2, 3};
int arr2[] = {4, 5, 3, 6};
temIntersecao(arr1, 3, arr2, 4); // retorna true

int arr3[] = {1, 2, 3};
int arr4[] = {4, 5, 6, 7};
temIntersecao(arr3, 3, arr4, 4); // retorna false
```

## Distância entre dois pontos
Escreva uma função que recebe as coordenadas de dois pontos em um plano cartesiano e retorna a distância entre eles.
```cpp
double distancia(double x1, double y1, double x2, double y2);
```
Exemplo:
```cpp
distancia(0.0, 0.0, 3.0, 4.0); // retorna 5.0
distancia(1.0, 2.0, 1.0, 2.0); // retorna 0.0
distancia(-1.0, -1.0, 1.0, 1.0); // retorna 2.82843
```

## Menor distância em um array
Escreva uma função que recebe uma sequência de pontos, representados por dois arrays, um contendo as coordenadas X e o outro as Y, e retorna a menor distância entre os pontos.
Reutilize a solução da atividade anterior.
```cpp
double menorDistancia(double x[], double y[], int tamanho);
```
Exemplo:
```cpp
double x[] = {0.0, 1.0, 4.0};
double y[] = {0.0, 1.0, 5.0};
menorDistancia(x, y, 3); // retorna 1.41421 (distância entre (0,0) e (1,1))

double x2[] = {1.0, 2.0, 3.0};
double y2[] = {5.5, 6.5, 7.5};
menorDistancia(x2, y2, 3); // retorna 1.41421 (distância entre (1.0,5.5) e (2.0,6.5))
```


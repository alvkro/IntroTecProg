# Recursão:

- Recursão é algo que é definido por um processo de repetição onde ele mesmo é chamado. *(ex: Fractais, Bonecas Russas...)*

- Na programação, esse conceito aplica-se em funções, reduzindo um problema maior em algo menor.

# Estrutura recursiva:

```cpp
int fatorial(int n) {
    if (n == 0) { // Caso Base: a chamada irá parar ao
        return 1; // atingir n = 0
    }
    else {                          
        return n * fatorial(n - 1); 
    }                               
}
/*Enquanto não atingir o caso base, a função irá chamar n * fatorial(n-1), reduzindo a cada chamada, até bater o caso base. Após isso, o programa vai desempilhando cada chamada e resolvendo, até chegar no caso n, retornando o resultado!*/
```
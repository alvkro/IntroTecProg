#include <iostream>
#include <string>
using namespace std;

// ============================================================================
// CONCEITO 1: FUNÇÕES BÁSICAS
// ============================================================================

// Declaração (protótipo) da função
int soma(int a, int b);

// Função sem retorno (void)
void mensagem() {
    cout << "Olá! Esta é uma função void." << endl;
}

// Função com retorno
int dobro(int numero) {
    return numero * 2;
}

// ============================================================================
// CONCEITO 2: PARÂMETROS E ARGUMENTOS
// ============================================================================

// Parâmetros por valor (cópia)
void incrementoPorValor(int x) {
    x = x + 1;
    cout << "Dentro da função (valor): x = " << x << endl;
}

// Parâmetros por referência (modifica original)
void incrementoPorReferencia(int &x) {
    x = x + 1;
    cout << "Dentro da função (referência): x = " << x << endl;
}

// Parâmetros constantes (não podem ser modificados)
void exibirValor(const int &x) {
    // x = 10; // ERRO! x é const
    cout << "Valor: " << x << endl;
}

// ============================================================================
// CONCEITO 3: SOBRECARGA DE FUNÇÕES
// ============================================================================

// Funções com mesmo nome mas parâmetros diferentes
int multiplicar(int a, int b) {
    return a * b;
}

double multiplicar(double a, double b) {
    return a * b;
}

int multiplicar(int a, int b, int c) {
    return a * b * c;
}

// ============================================================================
// CONCEITO 4: VALORES PADRÃO (DEFAULT)
// ============================================================================

void cumprimentar(string nome = "Visitante", int hora = 12) {
    string saudacao;
    if (hora < 12) saudacao = "Bom dia";
    else if (hora < 18) saudacao = "Boa tarde";
    else saudacao = "Boa noite";
    
    cout << saudacao << ", " << nome << "!" << endl;
}

// ============================================================================
// CONCEITO 5: FUNÇÕES RECURSIVAS
// ============================================================================

int fatorial(int n) {
    // Caso base
    if (n <= 1) {
        return 1;
    }
    // Caso recursivo
    return n * fatorial(n - 1);
}

// ============================================================================
// CONCEITO 6: FUNÇÕES INLINE
// ============================================================================

// Funções pequenas podem ser inline para melhor performance
inline int quadrado(int x) {
    return x * x;
}

// ============================================================================
// CONCEITO 7: TEMPLATES (FUNÇÕES GENÉRICAS)
// ============================================================================

template <typename T>
T maior(T a, T b) {
    return (a > b) ? a : b;
}

// Template com múltiplos tipos
template <typename T1, typename T2>
void exibirPar(T1 primeiro, T2 segundo) {
    cout << "Par: " << primeiro << " - " << segundo << endl;
}

// ============================================================================
// FUNÇÃO MAIN - TESTANDO TODOS OS CONCEITOS
// ============================================================================

int main() {
    cout << "=== DEMONSTRAÇÃO DE FUNÇÕES EM C++ ===" << endl << endl;
    
    // 1. Funções básicas
    cout << "1. FUNÇÕES BÁSICAS:" << endl;
    mensagem();
    cout << "Dobro de 5: " << dobro(5) << endl;
    cout << "Soma de 3 e 4: " << soma(3, 4) << endl << endl;
    
    // 2. Parâmetros vs Argumentos
    cout << "2. PARÂMETROS POR VALOR VS REFERÊNCIA:" << endl;
    int numero = 10;
    cout << "Antes (valor): numero = " << numero << endl;
    incrementoPorValor(numero);
    cout << "Depois (valor): numero = " << numero << endl;
    
    cout << "Antes (referência): numero = " << numero << endl;
    incrementoPorReferencia(numero);
    cout << "Depois (referência): numero = " << numero << endl << endl;
    
    // 3. Sobrecarga de funções
    cout << "3. SOBRECARGA DE FUNÇÕES:" << endl;
    cout << "multiplicar(3, 4) = " << multiplicar(3, 4) << endl;
    cout << "multiplicar(2.5, 3.5) = " << multiplicar(2.5, 3.5) << endl;
    cout << "multiplicar(2, 3, 4) = " << multiplicar(2, 3, 4) << endl << endl;
    
    // 4. Valores padrão
    cout << "4. VALORES PADRÃO:" << endl;
    cumprimentar();                    // Usa ambos os valores padrão
    cumprimentar("Maria");            // Usa hora padrão
    cumprimentar("João", 9);          // Usa ambos personalizados
    cout << endl;
    
    // 5. Recursão
    cout << "5. FUNÇÕES RECURSIVAS:" << endl;
    cout << "Fatorial de 5: " << fatorial(5) << endl;
    cout << "Fatorial de 7: " << fatorial(7) << endl << endl;
    
    // 6. Funções inline
    cout << "6. FUNÇÕES INLINE:" << endl;
    cout << "Quadrado de 8: " << quadrado(8) << endl << endl;
    
    // 7. Templates
    cout << "7. TEMPLATES (FUNÇÕES GENÉRICAS):" << endl;
    cout << "maior(10, 15) = " << maior(10, 15) << endl;
    cout << "maior(3.14, 2.71) = " << maior(3.14, 2.71) << endl;
    cout << "maior('x', 'a') = " << maior('x', 'a') << endl;
    exibirPar("Idade", 25);
    exibirPar("Preço", 19.99);
    
    return 0;
}

// ============================================================================
// DEFINIÇÃO DA FUNÇÃO DECLARADA NO INÍCIO
// ============================================================================

int soma(int a, int b) {
    return a + b;
}
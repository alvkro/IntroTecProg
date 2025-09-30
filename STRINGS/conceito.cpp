#include <iostream>
#include <string> // BIBLIOTECA USADA PARA ESSE ESTUDO
#include <algorithm> // Para transformações
#include <cctype> // Para funções de caractere (isalpha, isdigit, etc)
using namespace std;

int main(){
    // Strings são basicamente arrays de caracteres
    char nome1[30]; // Aqui, eu defini uma array de caracteres com um tamanho limitado a 30
    string nome2; // Nesse caso, ocorre a definição de uma array de caracteres de tamanho variável!!

    //PS1: Por definição, um caractere dessa array já é ocupado pelo \0, que indica o fim da array.
    //PS2: A leitura da string vai até um caractere "branco" (famoso " ").

    // ========== NOVOS CONCEITOS ==========

    // 1. DIFERENTES FORMAS DE INICIALIZAÇÃO
    string str1; // String vazia
    string str2 = "Hello World"; // Inicialização com literal
    string str3("Texto inicial"); // Usando constructor
    string str4(5, 'A'); // "AAAAA" - 5 caracteres 'A'
    string str5(str2); // Cópia de str2

    // 2. ENTRADA DE STRINGS COM ESPAÇOS
    string frase_completa;
    cout << "Digite uma frase completa: ";
    getline(cin, frase_completa); // Lê até encontrar \n (nova linha)
    cout << "Frase: " << frase_completa << endl;

    // 3. OPERAÇÕES BÁSICAS COM STRINGS
    string a = "Hello";
    string b = "World";
    
    // Concatenação
    string c = a + " " + b; // "Hello World"
    
    // Append
    a.append(" C++"); // "Hello C++"
    
    // Comparação
    if (a == b) {
        cout << "Strings iguais" << endl;
    } else {
        cout << "Strings diferentes" << endl;
    }

    // 4. MÉTODOS IMPORTANTES DA CLASSE STRING
    string texto = "Programacao em C++";
    
    // Tamanho
    cout << "Tamanho: " << texto.length() << endl; // ou texto.size()
    
    // Verificar se está vazia
    cout << "Vazia? " << (texto.empty() ? "Sim" : "Nao") << endl;
    
    // Acesso a caracteres
    cout << "Primeiro caractere: " << texto[0] << endl;
    cout << "Primeiro caractere (com at): " << texto.at(0) << endl;
    
    // Busca em strings
    size_t pos = texto.find("C++");
    if (pos != string::npos) {
        cout << "'C++' encontrado na posicao: " << pos << endl;
    }
    
    // Substring
    string substring = texto.substr(0, 11); // "Programacao"
    cout << "Substring: " << substring << endl;
    
    // Replace (substituição)
    texto.replace(13, 3, "Python"); // "Programacao em Python"
    cout << "Apos replace: " << texto << endl;
    
    // Insert
    texto.insert(13, "incrivel "); // "Programacao incrivel em Python"
    cout << "Apos insert: " << texto << endl;
    
    // Erase
    texto.erase(13, 9); // Remove "incrivel "
    cout << "Apos erase: " << texto << endl;

    // 5. MODIFICAÇÃO DE CASE
    string mixed = "HeLLo WoRLd";
    
    // Para minúsculo
    transform(mixed.begin(), mixed.end(), mixed.begin(), ::tolower);
    cout << "Minusculo: " << mixed << endl;
    
    // Para maiúsculo
    transform(mixed.begin(), mixed.end(), mixed.begin(), ::toupper);
    cout << "Maiusculo: " << mixed << endl;

    // 6. CONVERSÕES
    // String para número
    string numero_str = "123";
    int numero = stoi(numero_str); // string to int
    cout << "Numero como int: " << numero + 1 << endl;
    
    // Número para string
    int x = 456;
    string x_str = to_string(x);
    cout << "Numero como string: " + x_str << endl;

    // 7. ITERAÇÃO COM RANGE-BASED FOR LOOP
    string palavra = "C++";
    cout << "Caracteres: ";
    for (char c : palavra) {
        cout << c << " ";
    }
    cout << endl;

    // 8. MANIPULAÇÃO DE CARACTERES INDIVIDUAIS
    string teste = "abc123";
    for (char& c : teste) {
        if (isdigit(c)) {
            c = 'X'; // Substitui dígitos por 'X'
        }
    }
    cout << "Apos substituicao: " << teste << endl;

    // 9. COMPARAÇÕES AVANÇADAS
    string strA = "apple";
    string strB = "banana";
    
    // Compare retorna 0 se iguais, <0 se strA vem antes, >0 se strA vem depois
    int resultado = strA.compare(strB);
    cout << "Comparacao: " << resultado << endl;
    
    // Ou use operadores relacionais
    if (strA < strB) {
        cout << strA << " vem antes de " << strB << endl;
    }

    // 10. LIMPEZA DE STRING
    string temp = "Texto temporario";
    temp.clear(); // Esvazia a string
    cout << "Tamanho apos clear: " << temp.length() << endl;

    // 11. CAPACIDADE E ALOCAÇÃO
    string grande;
    cout << "Capacidade inicial: " << grande.capacity() << endl;
    grande.reserve(100); // Reserva espaço para 100 caracteres
    cout << "Capacidade apos reserve: " << grande.capacity() << endl;

    // ========== SEU CÓDIGO ORIGINAL ==========
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << " ";
    }
    cout << endl;

    return 0;
}
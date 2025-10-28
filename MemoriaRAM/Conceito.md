# Estrutura da memória RAM para programas:
1) *Heap:* Memória dinâmica, toda memória disponível no PC;
2) *Stack (pilha):* Armazena variáveis locais/chamaddas de funções (presente na recursão);
3) *Static/global:* Armazena variáveis estáticas e globais;
4) *Código do programa:* contém todo o código do programa;

# Stack (pilha):
- É uma região especial da memória do seu computador que armazena variáveis temporárias criadas por cada função (incluindo a `main()`) e também armazena as chamadas de cada função;
- Nessa pilha, o último que entra é o primeiro que sai (LIFO);
- Toda vez que uma função cria uma nova variável, ela é empurrada (push) para a pilha;
- Quando o código sai de uma função, todas as variáveis colocadas na pilha por essa função são liberadas ou desalocadas e essa região de memória fica disponível;
- Durante a chamada da função um bloco de memória (`stackframe`) é empilhado no topo da pilha de funções;

# Objetos x Memória:
- Para objetos (POO), QUASE todos que são criados utilizando a nomenclatura ponto são armazenados na Stack (variáveis globais e locais sendoa excessão), justificando o motivo dele ser "temporário", comparado com os ponteiros; Isso só ocorre em C++, em Java ou C# armazena na Heap;
- Utilizando ponteiros, a memória é gerenciada manualmente na Heap, onde ela persiste até que seja deletada manualmente com `delete` no código; Assim, é utilizado um ponteiro para acessar a referência o objeto a partir do primeiro endereço do objeto, acessando seus métodos e atributos;

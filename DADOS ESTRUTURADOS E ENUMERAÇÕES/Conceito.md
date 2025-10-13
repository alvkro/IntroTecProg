# Tipos primitivos:
- Tipo de dado básico fornecido pela linguagem (átomo das informações).
*Ex: char, unsigned char, int, float, double...*

# Tipos não-primitivos:
- Representação de um dado a partir de várias informações (como variáveis).
*Ex: Pixel de uma imagem (R, G e B), coordenada de um pixel (linha e coluna).*

# Tipo "estruturado" (struct) em C++:
- Define um novo tipo de dado com diferentes informações:
```cpp
struct Nome_do_tipo {
    // "variáveis" internas do tipo
};
```
```cpp
struct Pixel {
    unsigned char r, g, b;
};
```
```cpp
struct Point {
    double x, y;
};

double distancia(Point a, Point b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}
```

# Tipo dos campos
- Os campos podem ser de diferentes tipos, inclusive de outros tipos struct:
```cpp
struct Pixel {
    unsigned char r, g, b; <-
};

struct Image {
  int width, height;
  Pixel pixels[256][256]; <-
};
```
# Inicialização de campos:
- É possível inicializar os valores dos campos usando { }, seguindo a mesma ordem da definição de campos:

```cpp
struct Pixel {
  unsigned char r, g, b;
};

struct Point {
  double x, y;
};

int main () {
    Point pt {1, 2};
    Pixel px {255, 0, 0};
}
```
- Também é possível fazer isso com arrays/matrizes:
```cpp
struct Pixel {
  unsigned char r, g, b;
};

struct Image {
    int width, height;
    Pixel pixels[256][256];
};

int main () {
    Image img = {3, 3, {
        {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}}
        {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}}
        {{255, 0, 0}, {255, 0, 0}, {255, 0, 0}}
    }};
}
```
# Passagem de parâmetros:
- Os valores dos campos são copiados para uma variável local (do mesmo tipo):
- Neste exemplo, o valor impresso será `{255, 0, 0}`, pois o valor armazenado pela variável apenas modificou localmente, por isso é necessário referenciá-la com `(&)`.
```cpp
struct Pixel {
  unsigned char r, g, b;
};
void toGray(Pixel p) {
    int gray = (p.r + p.g + p.b) / 3;
    p.r = gray;
    p.g = gray;
    p.b = gray;
}
int main() {
    Pixel p = {255, 0, 0};
    toGray(p);
    cout << (int) p.r << endl;
    cout << (int) p.g << endl;
    cout << (int) p.b << endl;
}
```

```cpp
struct Pixel {
  unsigned char r, g, b;
};
void toGray(Pixel &p) {
    int gray = (p.r + p.g + p.b) / 3;
    p.r = gray;
    p.g = gray;
    p.b = gray;
}
int main() {
    Pixel p = {255, 0, 0};
    toGray(p);
    cout << (int) p.r << endl;
    cout << (int) p.g << endl;
    cout << (int) p.b << endl;
}
```
- Uma boa prática é que sempre que um objeto não precise ser modificado, usar a prática da **referência constante** (`const &`). Caso precise mudar, apenas use `&`.

# Enumerações:
- Define um novo tipo que pode assumir apenas conjunto predefinido de valores
- *Ex: Baralho de cartas, Xadrez, Habilidades de um boneco...*

```cpp
enum ChessPiece {
    Pawn, Knight, Bishop, Queen
};

int main() {
    ChessPiece p = Pawn;
    ChessPiece k = Knight;
    cout << q << endl; // Imprime 4
}
```
# Enumerações vs. Structs:
- Struct: Usado para armazenar várias informações.
- Enumeração: Armazena apenas uma "classe", mas com várias possibilidades (como é o caso de baralho, é do tipo carta, com vários tipos [Ás, 2, 3, 4, 5...]) 
#include <iostream>
using namespace std;

int main() {
    int n;
    int qtd = 0;
    char type;
    int qtd_final = 0;
    cin >> n;
    int coelho = 0;
    int rato = 0;
    int sapo = 0;

    for (int i = 0; i < n; i++) {
        cin >> qtd >> type;

        qtd_final += qtd;
            if (type == 'C') {
                coelho++;
            }
            else if (type == 'R') {
                rato++;
            }
            else if (type == 'S') {
                sapo++;
            }
    }
    float perc_c = coelho/qtd_final;
    float perc_r = rato/qtd_final;
    float perc_s = sapo/qtd_final;

    printf("Total: %i cobaias", qtd_final);
    printf("Total de coelhos: %i", coelho);
    printf("Total de ratos: %i", rato);
    printf("Total de sapos: %i", sapo);
    printf("Percentual dos coelhos: %i", perc_c);
    printf("Percentual dos ratos: %i", perc_r);
    printf("Percentual dos sapos: %i", perc_s);


}
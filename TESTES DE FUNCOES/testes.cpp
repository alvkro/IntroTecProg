// Muito usado para testar funções em C++, para isso, 
// é necessário baixar o arquivo "doctest.h" do site oficial

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "potencia.cpp"

#define MAX 100

TEST_CASE("Testando a funcao potencia") {
    CHECK(potencia(2, 0) == 1);
    CHECK(potencia(2, 3) == 8);
    CHECK(potencia(5, 4) == 625);
    CHECK(potencia(10, 2) == 100);
    CHECK(potencia(3, 5) == 243);
}
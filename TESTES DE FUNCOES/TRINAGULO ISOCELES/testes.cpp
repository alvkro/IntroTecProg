#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "triangulo.cpp"
#include "doctest.h"

TEST_CASE("Teste da função Triangulos:") {
    CHECK(Triangulos(10.5,  10.5,  10.5) == 0);
    CHECK(Triangulos(4.32,  10.5,  10.5) == 1);
    CHECK(Triangulos(-10.5,  10.5,  10.5) == 3);
    CHECK(Triangulos(0,  10.5,  10.5) == 3);
    CHECK(Triangulos(10.5,  10.4,  9.45) == 2);
}
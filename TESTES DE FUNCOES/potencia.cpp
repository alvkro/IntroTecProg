int potencia(int base, int expo) { // te amo recursão
    if (expo == 0) {
        return 1;
    }
    else {
        return base * potencia(base, expo - 1);
    }
}
int Triangulos(float l1, float l2, float l3) {
    if (l1 == l2 && l2 == l3) {
        return 0;
    }
    else if (l1 <= 0 || l2 <= 0 || l3 <= 0) {
        return 3;
    }
    else if (l1 != l2 && l2 == l3) {
        return 1;
    }
    else if(l1 != l2 && l2 != l3) {
        return 2;
    }
    return 0;
}
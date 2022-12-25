// 3. Calculati cea mai mare cifra a unui numar intreg. Prototip: int cifra_max(long n);
int cifra_max(long n) {
    int rest, max = 0;
    if (n < 0) n *= -1;
    while (n > 0) {
        rest = n % 10;
        if (max < rest) max = rest;
        n /= 10;
    }
    return max;
}
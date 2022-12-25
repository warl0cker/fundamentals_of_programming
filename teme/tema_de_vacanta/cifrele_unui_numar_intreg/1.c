// 1. Calculati suma cifrelor unui numar intreg. Prototip: int cifre(long n);
int cifre(long n) {
    int rest, suma = 0;
    while (n > 0) {
        rest = n % 10;
        suma += rest;
        n /= 10;
    }
    return suma;
}
// 2. Calculati numarul de aparitii ale unei cifre intr-un numar intreg. Prototip: int aparitii(long n, int c);
int aparitii(long n, int c) {
    int rest, contor = 0;
    while (n > 0) {
        rest = n % 10;
        if (rest == c) contor++;
        n /= 10;
    }
    return contor;
}
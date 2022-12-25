// 4. Verificati daca un numar este palindrom (un numar este palindrom daca este egal cu rasturnatul sau, de exemplu, 23232 este un palindrom). Functia va returna 1 daca numarul este palindrom si 0 in caz contrar. Prototip: int palindrom(long n);
int palindrom(long n) {
    int s, rez = 0;
    long check = n;
    while (n > 0) {
        s = n % 10;
        rez = (rez * 10) + s;
        n /= 10;
    }
    return ((check == rez) ? 1 : 0);
}
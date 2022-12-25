// 3. Verificati daca un numar natural este prim (un numar natural este prim daca are exact doi divizori). Functia va returna 1 daca numarul este prim si 0 in caz contrar. Prototip: int prim(long n);
int prim(long n) {
    int prime = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n == 0 || n == 1) {
            prime = 0;
            break;
        }
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }
    return ((prime) ? 1 : 0);
}
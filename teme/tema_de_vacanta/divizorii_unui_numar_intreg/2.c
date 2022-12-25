// 2. Verificati daca un numar natural este perfect (un numar natural este perfect daca suma divizorilor naturali este egala cu de doua ori numarul, de exemplu, 6 este un numar perfect, deoarece 1 + 2 + 3 + 6 = 2*6). Functia va returna 1 daca numarul este perfect si 0 in caz contrar. Prototip: int perfect(long n);
int perfect(long n) {
    int s = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0) s += i;
    return ((s == n) ? 1 : 0);
}
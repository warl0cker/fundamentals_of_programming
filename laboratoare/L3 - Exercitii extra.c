// Scrieti un program care afiseaza primii n termeni din seria numerelor lui Fibonacci.
#include <stdio.h>
int main() {
    int i, n, t1 = 1, t2 = 1, next = t1;
    scanf("%d", &n);
    printf("%d ", t1);
    for (i = 1; i < n; ++i) {
        printf("%d ", next);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }
    return 0;
}

// Scrieti un program care verifica daca un numar este palindrom sau nu.
#include <stdio.h>
int main() {
    int n, s, check, rez = 0;
    scanf("%d", &n);
    check = n;
    while (n > 0) {
        s = n % 10;
        rez = (rez * 10) + s;
        n /= 10;
    }
    (check == rez) ? printf("%d este palindrom.\n", check) : printf("%d nu este palindrom\n", check);
    return 0;
}

/* Scrieti un program care afiseaza numerele puternice mai mici decat sau egale cu N (N citit de la tastatura, de maxim 8 cifre!scanf).
Indicatie. Un numar se numeste "numar puternic" daca suma factorialelor cifrelor sale este egala cu numarul insusi. 
Ex: 145 este numar puternic (strong number), pentru ca 1! +4! +5! = 1+24+120 = 145 */
#include <stdio.h>
int fact(int r) {
    int mul = 1;
    for (int i = 1; i <= r; i++)
        mul = mul * i;
    return mul;
}
int main() {
    int n, m, sum = 0, r, fact;
    scanf("%d", &n);
    m = n;
    while (n > 0) {
        r = n % 10;
        fact = 1;
        for (int i = 1; i <= r; i++)
            fact *= i;
        sum += fact;
        n /= 10;
    }
    (sum != m) ? printf("%d nu este numar puternic", m) ? printf("%d este numar puternic", m);
    return 0;
}
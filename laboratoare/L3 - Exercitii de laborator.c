// Scrieți un program care calculează produsul a n numere naturale, citite de la tastatura.
#include <stdio.h>
int main() {
    int n, i, v, p = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &v);
        p = p * v;
    }
    printf("Rezultatul este %d", p);
    return 0;
}

// Scrieți un program care afișează toate puterile mai mici decât p ale unui numar natural n dat (p și n citite de la utilizator).
#include <stdio.h>
int main() {
    int n, k, i = 0, p = 0;
    scanf("%d", &n);
    scanf("%d", &k);
    for (i = 0; i < n; i++) {
        p = ((i == 0) ? 1 : p * k);
        if (p > n) break;
        printf("%d la puterea %d este %d\n", k, i, p);
    }
    return 0;
}

// Scrieti un program care afiseaza toti divizorii naturali proprii ai unui numar natural n citit de la tastatura. Programul afiseaza la sfarsit pe cel mai mare si cel mai mic divizor propriu.
#include <stdio.h>
int main() {
    int n, i, prime = 0, high = 1, low;
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++) {
        if (n == 0 || n == 1) {
            prime = 1;
            break;
        }
        if (n % i == 0) {
            prime = 1;
            if (high == 1) low = i;
            printf("%d este divizor al lui %d\n", i, n);
            high = i;
        }
    }
    (!prime) ? printf("Numarul nu are divizori proprii (este prim)") : printf("Cel mai mic este %d si cel mai mare este %d\n", low, high);
    return 0;
}

// Scrieți un program care calculează numărul de cifre divizibile cu 3 din care este format numărul natural n, citit de la tastatură.
#include <stdio.h>
int main() {
    int n, r, count = 0;
    scanf("%d", &n);
    while (n) {
        r = n % 10;
        if (r % 3 == 0) count++;
        n /= 10;
    }
    printf("Numarul contine %d cifre divizibile cu 3.\n", count);
    return 0;
}

// Scrieti un program care citeste de la tastatura numere naturale pana la intalnirea lui 0. Determinati care dintre numerele citite sunt perfecte. Un numar este perfect daca este egal cu suma divizorilor sai pozitivi mai mici decat el.
#include <stdio.h>
int main() {
    int n, i, count = 0, arr[100];
    scanf("%d", &n);
    while (1) {
        int s = 0;
        scanf("%d", &n);
        if (n == 0) break;
        for (i = 1; i <= n / 2; i++)
            if (n % i == 0) s += i;
        if (s == n) {
            arr[count] = s;
            ++count;
        }
    }
    for (i = 0; i < count; i++)
        printf("%d este numar perfect\n", arr[i]);
    return 0;
}

// Calculaţi cifra de control a unui număr întreg efectuând suma cifrelor sale, apoi suma cifrelor acestei sume etc. Până se obţine o sumă formată dintr-o singură cifră.
#include <stdio.h>
int main() {
    int n, r, s = 0;
    scanf("%d", &n);
    while (n != 0) {
        r = n % 10;
        s += r;
        n /= 10;
    }
    if (s > 9) {
        int s2 = 0;
        while (s != 0) {
            r = s % 10;
            s2 += r;
            s /= 10;
        }
        printf("Cifra de control este %d\n", s2);
    } else printf("Cifra de control este %d\n", s);
    return 0;
}

// Pentru o bază de numerație b dată, o cifra d și un număr n, să se calculeze de câte ori apare cifra d în exprimarea numarului n, scris în baza b.
#include <stdio.h>
int main() {
    int b, d, n, rest, count = 1, base = 0, found = 0, arr[100];
    scanf("%d", &b);
    scanf("%d", &n);
    scanf("%d", &d);
    int temp = n;
    while (temp != 0) {
        arr[count++] = temp % b;
        temp /= b;
    }
    for (int j = count - 1; j > 0; j--)
        base *= 10 + arr[j];
    while (base != 0) {
        rest = base % 10;
        if (rest == d) found++;
        base /= 10;
    }
    (found) ? printf("Numarul %d are %d cifre de %d, scris in baza %d.", n, found, d, b) : printf("Cifra %d nu este folosita la scrierea in baza %d.", d, b);
    return 0;
}
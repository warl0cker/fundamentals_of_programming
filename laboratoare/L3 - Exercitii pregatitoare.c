// Scrieti un program C care calculeaza suma S = 1 + 2 + ... + n, pentru un numar natural n citit de la tastatura, Folositi instructiunea for.
#include <stdio.h>
int main() {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        s = s + i;
    printf("Suma este %i", s);
    return 0;
}

// Scrieti un program care calculeaza valoarea n!, pentru n numar natural, citit de la tastatura.
#include <stdio.h>
int main() {
    int n, s = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        s = s * i;
    printf("Factorialul lui %d este %d.", n, s);
    return 0;
}

// Scrieti un program C care calculeaza valoarea sumei S = 1 - 2 + 3 - ... ± n, pentru un n citit de la tastatura.
#include<stdio.h>
int main() {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        s = ((i % 2 != 0) ? s + i : s - i);
    printf("Rezultatul este %d", s);
    return 0;
}

// Scrieți un program care citește numere naturale până la întalnirea lui zero și numără câte dintre numerele citite sunt pare.
#include<stdio.h>
int main() {
    int i, n = 0;
    scanf("%d", &i);
    while (i != 0) {
        if (i % 2 == 0) n = n + 1;
        scanf("%d", &i);
    }
    printf("Am gasit %i numere pare", n);
    return 0;
}

// Scrieti un program care citeste un numar intreg de la tastatura si verifica daca acesta este prim sau nu.
#include <stdio.h>
int main() {
    int n, check = 0;
    scanf("%d", &n);
    if (n == 0 || n == 1) check = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            check = 1;
            break;
        }
    }
    (check) ? printf("Numarul este compus.") : printf("Numarul este prim.");
    return 0;
}

// Scrieti un program care calculeaza suma divizorilor unui numar natural n.
#include <stdio.h>
int main() {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (n % i == 0) s = s + i;
    printf("Suma divizorilor lui %d este %d.", n, s);
    return 0;
}
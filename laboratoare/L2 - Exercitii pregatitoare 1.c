// Pentru un numar intreg introdus de la tastatura determinati valoarea absoluta a acestuia.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n >= 0) printf("Numarul introdus este pozitiv\n");
    else {
        int m = abs(n);
        printf("Absolutul numarului %d este %d\n", n, m);
    }
    return 0;
}

// Pentru un numar intreg introdus de la tastatura determinati daca acesta este par, impar sau 0.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) printf("Numarul este 0.\n");
    else if (n % 2 == 0) printf("Numarul %d este par.\n", n);
    else printf("Numarul %d este impar.\n", n);
    return 0;
}

// Pentru doua  numare intregi pozitive introduse de la tastatura, a si d, verificati daca d este divizor pentru a.
#include <stdio.h>
int main() {
    int a, d;
    scanf("%i%i", &a, &d);
    if (d == 0) printf("Operatie imposibila");
    else if (a == 0) printf("Numarul trebuie sa fie diferit de 0");
    else if (a % d == 0) printf("%d este divizibil cu %d", a, d);
    else printf("%d nu este divizor pentru %d", d, a);
    return 0;
}
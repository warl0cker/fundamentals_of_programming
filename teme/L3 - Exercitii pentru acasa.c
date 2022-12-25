// Scrieti un program care citeste o secventa de numere naturale (pana la aparitia numarului 0) si calculeaza cel mai mare divizor comun al lor.
#include <stdio.h>
int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}
int main() {
    int n, arr[100], count = 0;
    do {
        scanf("%d", &n);
        arr[count] = n;
        count++;
    } while (n != 0);
    int result = arr[0];
    for (int i = 0; i < count; i++)
        result = gcd(arr[i], result);
    printf("Cmmdc al numerelor introduse este %d", result);
    return 0;
}

// Scrieti un program care afiseaza tabla inmultirii pana la un numar n (citit de la tastatura).
#include <stdio.h>
int main() {
    int n, p;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            p = i * j;
            printf("%dx%d=%d  ", i, j, p);
        }
        printf("\n");
    }
    return 0;
}
// Scrieti un program care calculeaza numarul de 0-uri cu care incepe reprezentarea binara a unui numar intreg pozitiv.
#include <stdio.h>
int main() {
    int n, rest, cnt = 32, c[32] = {0};
    scanf("%d", &n);
    while (n != 0) {
        rest = n % 2;
        n /= 2;
        c[--cnt] = rest;
    }
    printf("Reprezentarea binara: ");
    for (int i = 0; i < 32; i++)
        printf("%d", c[i]);
    printf("\nNumarul de 0-uri de la inceput: %d\n", cnt);
    return 0;
}

// Scrieti un program care citeste un numar in format binar si il transforma in codificare Gray.
#include <stdio.h>
#include <math.h>
int main() {
    unsigned long long int n, result = 0;
    int a, b, i = 0;
    scanf("%llu", &n);
    while (n != 0) {
        a = n % 10;
        n /= 10;
        b = n % 10;
        if ((a && !b) || (!a && b)) result += pow(10, i);
        i++;
    }
    printf("The gray code: %llu\n", result);
    return 0;
}

// Scrieti un program care verifica daca un sir primit de la tastatura este o adresa IP valida.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char ip[16];
    int num, cnt = 0, flag = 1;
    scanf("%16s", ip);
    if (strlen(ip) > 16) {
        printf("IP invalid");
        return -1;
    }
    char *p = strtok(ip, ".");
    while (p && flag) {
        num = atoi(p);
        if (num >= 0 && num <= 255 && (cnt++ < 4)) {
            flag = 1;
            p = strtok(NULL, ".");
        } else {
            flag = 0;
            break;
        }
    }
    (flag) ? printf("IP valid") : printf("IP invalid");
    return 0;
}
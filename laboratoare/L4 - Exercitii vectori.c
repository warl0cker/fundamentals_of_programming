// Scrieţi un program care citeşte de la tastatură doi vectori de numere (de aceeaşi dimensiune) şi calculează suma lor, termen cu termen, într-un al treilea vector. Programul afişează rezultatul obţinut.
#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int a[n], b[n], c[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];
    printf("Suma vectorilor:\n");
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);
    return 0;
}

// Scrieţi un program care citeşte de la tastatură doi vectori de numere de aceeaşi dimensiune şi calculează produsul scalar al acestora. Produsul scalar reprezinta suma produselor element cu element (Ex. a=(2,3) si b=(4,5) axb=2*4+3*5=8+15=23 )
#include <stdio.h>
int main() {
    int n, s, i;
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n; i++)
        s += a[i] * b[i];
    printf("Produsul scalar al vectorilor = %d\n", s);
    return 0;
}

// Introduceti de la tastatura o succesiune de n  numere intregi, stocate intr-un vector cu dimesniunea maxima de 50. Modificati fiecare element stocat prefixand fiecare valoare cu cifra 9. Astfel, daca v[i]=123 valoarea inlocuita va fi 9123.
#include <stdio.h>
int main() {
    int n, i, j, temp, count, padding;
    do {
        scanf("%d", &n);
    } while (n < 1 || n > 50);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) {
        printf("%d,", arr[i]);
        padding = 1;
        count = 0;
        temp = arr[i];
        while (temp != 0) {
            temp /= 10;
            count++;
        }
        for (j = 0; j < count; j++)
            padding *= 10;
        arr[i] += (9 * padding);
    }
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%d,", arr[i]);
    return 0;
}

/* Introduceti de la tastatura o succesiune de n  numere intregi, stocate intr-un vector cu dimesniunea maxima de 50. Modificati valorile stocate conform urmatorului algoritm:
primul si ultimul element raman neschimbate;
elementul de pe pozitia i se calculeaza ca fiind [(vi-1 + vi +vi+1))/3], unde cu [v] am notat partea intreaga */
#include <stdio.h>
int main() {
    int n, i;
    do {
        scanf("%d", &n);
    } while (n < 1 || n > 50);
    int arr1[n], arr2[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    for (i = 0; i < n; i++) {
        printf("%d,", arr1[i]);
        if (i == 0 || i == (n - 1)) {
            arr2[i] = arr1[i];
            continue;
        }
        arr2[i] = (arr1[i - 1] + arr1[i] + arr1[i + 1]) / 3;
    }
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%d,", arr2[i]);
    return 0;
}

// Fie o matrice patratica de ordinul n, cu n maxim 100. Afisati suma elementelor de pe diagonala principala.
#include <stdio.h>
int main() {
    int n, i, j, s = 0;
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i == j) s += a[i][j];
    printf("%d", s);
    return 0;
}

// Fie o matrice patratica de ordinul n. Determinati elementul maxim de pe fiecare linie, pe care il memorati intr-un tablou unidimensional, pe pozitia corespunzatoare liniei. La final afisati continutul acestuia.
#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    int a[n][n], max[n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++) {
        max[i] = a[i][0];
        for (j = 0; j < n; j++)
            if (max[i] < a[i][j]) max[i] = a[i][j];
    }
    for (i = 0; i < n; i++)
        printf("%d ", max[i]);
    return 0;
}

/* Fie o matrice patratica de ordinul n ale caror elemente sunt formate din 0 si 1. Generati elementele matricei, prin alternarea cifrelor de 0 si 1. Exemplu pentru o matrice de ordinul 3:
	0	1	0
    1   0   1
	0	1	0
1. Primul element este 0.
2. Inlocuiti cifrele de 1 cu valoarea 2 */
#include <stdio.h>
int main() {
    int n, i, j, cnti = 0;
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++) {
        cnti = ((i % 2 == 0) ? 0 : 1);
        for (j = 0; j < n; j++) {
            a[i][j] = ((cnti % 2 == 0) ? 0 : 1);
            cnti++;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}

// Scrieţi un program care citeşte de la tastatură un număr natural scris în baza 10 şi afişează reprezentarea acestuia în baza 2. Se va folosi  un vector pentru a stoca valorile din reprezentarea în baza 2 a numărului.
#include <stdio.h>
int main() {
    int n, temp, rest, cnt = 0, c[128];
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        rest = temp % 2;
        temp /= 2;
        c[cnt++] = rest;
    }
    printf("Numarul %d in baza 2 este ", n);
    for (int i = cnt - 1; i >= 0; i--)
        printf("%d", c[i]);
    return 0;
}

// Scrieţi un program care citeşte de la tastatură un număr natural n scris în baza 10 şi un număr natural b, cu 2 ≤ b ≤ 10. Afişaţi reprezentarea lui n în baza b.
#include <stdio.h>
int main() {
    int n, b, rest, cnt = 0, c[128];
    scanf("%d", &n);
    do {
        scanf("%d", &b);
    } while (b < 2 || b > 10);
    while (n != 0) {
        rest = n % b;
        n /= b;
        c[cnt++] = rest;
    }
    for (int i = cnt - 1; i >= 0; i--)
        printf("%d", c[i]);
    return 0;
}
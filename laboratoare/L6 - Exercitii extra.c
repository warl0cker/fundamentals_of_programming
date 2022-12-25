//  Fie o matrice patratica de ordinul n, cu n maxim 100. Afisati suma elementelor de pe diagonala principala.
#include <stdio.h>
int main() {
    int n, suma = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            if (i == j) suma += arr[i][j];
        }
    }
    printf("%d", suma);
    return 0;
}

// Fie o matrice patratica de ordinul n. Determinati elementul maxim de pe fiecare linie, pe care il memorati intr-un tablou unidimensional, pe pozitia corespunzatoare liniei. La final afisati continutul acestuia.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n], max[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    for (int i = 0; i < n; i++) {
        max[i] = arr[i][0];
        for (int j = 1; j < n; j++)
            if (max[i] < arr[i][j]) max[i] = arr[i][j];
    }
    for (int i = 0; i < n; i++)
        printf("%d ", max[i]);
    return 0;
}

// Fie o matrice patratica de ordinul n ale caror elemente sunt formate din 0 si
// 1.Generati elementele matricei, prin alternarea cifrelor de 0 si 1. Primul element este 0.
// 2. Inlocuiti cifrele de 1 cu valoarea 2
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
    int n, temp, cnt = 0;
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        temp /= 2;
        cnt++;
    }
    int arr[cnt];
    temp = n;
    for (int i = 0; i < cnt; i++) {
        arr[i] = temp % 2;
        temp /= 2;
    }
    printf("Numarul %d in baza 2 este ", n);
    for (int i = cnt - 1; i >= 0; i--)
        printf("%d", arr[i]);
    return 0;
}

// Scrieţi un program care citeşte de la tastatură un număr natural n scris în baza 10 şi un număr natural b, cu 2 ≤ b ≤ 10. Afişaţi reprezentarea lui n în baza b.
#include <stdio.h>
int main() {
    int n, b, temp, cnt = 0;
    do {
        scanf("%d", &n);
        scanf("%d", &b);
    } while (b < 2 || b > 10);
    temp = n;
    while (temp != 0) {
        temp /= b;
        cnt++;
    }
    temp = n;
    int arr[cnt];
    for (int i = 0; i < cnt; i++) {
        arr[i] = temp % b;
        temp /= b;
    }
    for (int i = cnt - 1; i >= 0; i--)
        printf("%d", arr[i]);
    return 0;
}
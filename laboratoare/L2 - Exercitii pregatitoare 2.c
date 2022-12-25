// Scrieti un program care citeste de la tastatura un numar intreg n si verifica daca este par.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    (n % 2 == 0) ? printf("%d este par\n", n) : printf("%d este impar\n", n);
    return 0;
}

// Folosind instrucţiunea if, scrieţi un program care citeşte un număr intre 1 si 7 şi afişează ziua din săptămână corespunzătoare.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n == 1) printf("Luni");
    if (n == 2) printf("Marti");
    if (n == 3) printf("Miercuri");
    if (n == 4) printf("Joi");
    if (n == 7) printf("Duminica");
    return 0;
}

/* In Codul Numeric Personal, prima cifra ofera informatii generale despre sexul si originea persoanei respective, astfel

    cifrele 1,3,5 sunt cetateni romani de sex masculin 
    cifrele 2,4,6 sunt cetateni romani de sex feminin
    cifrele 7 sunt cetateni straini de sex masculin 
    cifrele 8 sunt cetateni straini de sex feminin

Folosind instrucţiunea if sau  switch, scrieţi un program care citeşte un număr intreg şi afişează sexul si originea persoanei, sau mesajul "Valoare invalida" pentru alte numere. */
#include <stdio.h>
int main() {
    int n[16];
    scanf("%d", n);
    switch (n[0]) {
        case 1:
            printf("Cetatean roman de sex masculin\n");
            break;
        case 3:
            printf("Cetatean roman de sex masculin\n");
            break;
        case 5:
            printf("Cetatean roman de sex masculin\n");
            break;
        case 2:
            printf("Cetatean roman de sex feminin\n");
            break;
        case 4:
            printf("Cetatean roman de sex feminin\n");
            break;
        case 6:
            printf("Cetatean roman de sex feminin\n");
            break;
        case 7:
            printf("Cetatean strain de sex masculin\n");
            break;
        case 8:
            printf("Cetatean strain de sex feminin\n");
            break;
        default:
            printf("Valoare invalida\n");
    }
    return 0;
}

// Folosind instructiuni repetitive, afisati toate numerele naturale pare de la 1 la n separate prin spatii, pentru n citit de la tastatura.
#include <stdio.h>
int main() {
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        if (i % 2 == 0) printf("%d ", i);
    return 0;
}

// Sa se afiseze toate numerele naturale de doua cifre care au cifra zecilor cuprinsa intre a si b, iar cifra unitatilor mai mica sau egala cu un c (a, b, c - numere citite de la tastatura).
#include <stdio.h>
int main() {
    int j, i, a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    for (j = a; j <= b; j++) {
        for (i = 0; i <= c; i++) {
            (j == 0) ? printf("%d", i) : printf("%d%d", j, i);
            (i != c) ? printf(" ") : printf("\n");
        }
    }
    return 0;
}
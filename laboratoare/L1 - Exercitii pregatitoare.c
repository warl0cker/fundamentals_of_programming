// Să se realizeze un program C care afiseaza mesajul:  Bine ai venit!
#include <stdio.h>
int main() {
    printf("Bine ai venit!\n");
    return 0;
}

// Scrieţi un program care citeşte două numere intregi de la tastatură şi afişează suma lor.
#include <stdio.h>
int main() {
    int nr1, nr2, suma = 0;
    scanf("%d", &nr1);
    scanf("%d", &nr2);
    suma = nr1 + nr2;
    printf("Suma este %d.", suma);
    return 0;
}

// Scrieți un program care citește un număr întreg de la tastatură și verifică dacă este par.
#include <stdio.h>
int main() {
    int n;
    scanf("%i", &n);
    if (n % 2 != 0) {
        printf("Numarul %i este impar.", n);
    } else {
        printf("Numarul %i este par.", n);
    }
    return 0;
}

// Să se scrie un program care, fiind date două numere întregi a și b, verifica dacă unul dintre ele este egal cu 10 sau dacă suma lor este 10 si afiseaza un mesaj corespunzator pe ecran. Ce se întâmplă dacă se introduc date invalide (numere reale sau  caractere alfanumerice)?
#include <stdio.h>
int main() {
    int a, b, s;
    scanf("%d", &a);
    scanf("%d", &b);
    s = a + b;
    if (s == 10 || a == 10 || b == 10) {
        printf("Un numar sau suma lor este 10\n");
    } else {
        printf("Numerele si suma lor nu sunt 10\n");
    }
    return 0;
}
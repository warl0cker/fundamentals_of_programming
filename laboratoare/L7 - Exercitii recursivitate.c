// Scrieti o functie recursiva care calculeaza puterea n a unui numar b (n si b primite ca parametri). Antetul functiei va fi urmatorul: long int putere(int n, int b);
long int putere(int n, int b){
    return ((b != 0) ? (n * putere(n, b-1)) : 1);
}

// Scrieti o functie recursiva pentru ca verifica daca  o cifra apare intr-un numar. Antetul functiei va fi urmatorul: int contine(int n, int cifra);
int contine(int n, int cifra) {
    if (n == cifra) return 1;
    return ((n != 0) ? ((n%10 == cifra) ? 1 : contine(n/10, cifra)) : 0);
}

// Scrieti o functie recursiva care afiseaza transcrierea in binar (baza 2) a unui numar intreg primit ca parametru. Antetul functiei va fi void baza2(int n); Indicatie. numarul in baza 2 se obtine din transformatul in baza 2 al jumatatii sale n/2 urmat de cifra restului n%2).
int baza2(int nr) {
    if (nr < 2) printf("%d", nr);
    else {
        baza2(nr / 2);
        printf("%d", nr % 2);
    }
    return 1;
}

/* Scrieti o functie (de preferat, recursiva) care verifica daca un numar contine numai cifre pare. Antetul functiei va fi int toate_pare(int n);
Functia returneaza 1, daca toate cifrele din nr primit ca parametru sunt pare, respectiv 0, daca numarul primit ca parametru contine cel putin o cifra impara. Scrieti un program in care verificati daca elementele de pe conturul unei matrice patratice contin numai cifre pare. Programul va parcurge pasii:
- va citi dimensiunea matricii de la tastatura
- va citi elementele matricii
- va afisa matricea
- va afisa o matrice care are conturul completat cu 0, respectiv 1, dupa cum elementele din matricea initiala au sau nu toate cifrele pare. Restul elementelor din matrice vor fi reprezentate cu spatii goale.*/
#include <stdio.h>
int toate_pare(int);
int main() {
    int nr;
    scanf("%d", &nr);
    int arr[nr][nr], arr2[nr][nr];
    for (int i = 0; i < nr; i++)
        for (int j = 0; j < nr; j++) {
            scanf("%d", &arr[i][j]);
            arr2[i][j] = toate_pare(arr[i][j]);
        }
    for (int i = 0; i < nr; i++) {
        for (int j = 0; j < nr; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    for (int i = 0; i < nr; i++) {
        for (int j = 0; j < nr; j++) {
            if (i == 0 || j == 0 || i == nr - 1 || j == nr - 1) printf("%d ", arr2[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}
int toate_pare(int n) {
    if (n != 0) {
        if ((n % 10) % 2 != 0) return 0;
        else return toate_pare(n / 10);
    } else return 1;
}

// Scrieti o functie care calculeaza produsul cifrelor din care este format un numar natural n, primit ca parametru. De preferat, scrieti functia in maniera recursiva. Scrieti un program in care aplicati functia definita mai sus asupra elementelor de pe diagonala secundara a unei matrice patratice, ale carei dimensiuni, respectiv elemente, sunt citite de la tastatura.
#include <stdio.h>
int produsul_cifrelor(int);
int main() {
    int nr;
    scanf("%d", &nr);
    int arr[nr][nr], arr2[nr];
    for (int i = 0; i < nr; i++)
        for (int j = 0; j < nr; j++)
            scanf("%d", &arr[i][j]);
    for (int i = 0; i < nr; i++) {
        for (int j = 0; j < nr; j++) {
            printf("%d   ", arr[i][j]);
            if ((nr - j - 1) == i) arr2[i] = produsul_cifrelor(arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < nr; i++)
        printf("%d ", arr2[i]);
    return 0;
}
int produsul_cifrelor(int nr) {
    return ((nr != 0) ? ((nr % 10) * produsul_cifrelor(nr / 10)) : 1);
}
// Scrieti un program care lucreaza cu o variabila globala - vector de 10 elemente intregi. Definiti o functie care primeste ca parametru o valoare si cauta valoarea respectiva in vector: daca exista, functia intoarce 1, altfel intoarce 0. In programul principal, umpleti vectorul cu elemente citite de la tastatura, cititi o valoare, apoi demonstrati cum se utilizeaza functia definita mai sus.
#include <stdio.h>
int vector[10];
int gaseste_element(int b) {
    for (int i = 0; i < 10; i++)
        if (b == vector[i]) return 1;
    return 0;
}
int main() {
    int b;
    for (int i = 0; i < 10; i++)
        scanf("%d", &vector[i]);
    scanf("%d", &b);
    (gaseste_element(b)) ? printf("Sirul contine valoarea") : printf("Sirul NU contine valoarea");
    return 0;
}

// a) Scrieti o functie care primeste ca parametri un tablou unidimensional (vector) de numere intregi si dimensiunea acestuia si calculeaza si returneaza maximul dintre elementele tabloului. Prototip: int maxim(int v[], int n); b) Scrieti o functie care primeste ca parametri un tablou unidimensional (vector) de numere intregi si dimensiunea acestuia si il afiseaza la consola, cu elementele separate prin spatii. Prototip: void afiseaza(int v[], int n); c)Scrieti un program C in care testati functiile implementate. programul va citi elementele unui vector de la tastatura, pana la primul 0 introdus.
#include <stdio.h>
int maxim(int v[], int n) {
    int max = v[0];
    for (int i = 1; i < n; i++)
        if (max < v[i]) max = v[i];
    return max;
}
void afiseaza(int v[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
int main() {
    int n, v[100], contor = 0;
    do {
        scanf("%d", &n);
        v[contor++] = n;
    } while (n != 0 && contor < 100);
    printf("Vectorul este:\n");
    afiseaza(v, contor);
    int max = maxim(v, contor);
    printf("Maximul din vector este %d", max);
    return 0;
}

// a) Scrieti o functie care primeste ca parametru un vector de numere reale si dimensiunea acestuia, in care se calculeaza si returneaza cate elemente din vector sunt mai mari decat media artimetica a elementelor din vector. Prototip: int contor(int v[], int n); b)  Scrieti o functie care primeste ca parametru un vector de numere reale si calculeaza si returneaza minimul din acest vector. Prototip: int minim(int v[], int n); c) Scrieti un program C in care testati functiile implementate. In program se vor citi elementele vectorului de la tastatura.
#include <stdio.h>
int contor(int v[], int n) {
    int suma = 0, contor = 0;
    for (int i = 0; i < n; i++)
        suma += v[i];
    suma /= n;
    for (int i = 0; i < n; i++)
        if (suma < v[i]) contor++;
    return contor;
}
int minim(int v[], int n) {
    int min = v[0];
    for (int i = 0; i < n; i++)
        if (min > v[i]) min = v[i];
    return min;
}
int main() {
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    printf("Minimul din vector este %d\n", minim(v, n));
    printf("%d elemente sunt >= cu media aritmetica a elementelor din vector", contor(v, n));
    return 0;
}

// a) Scrieti o functie care primeste ca parametru un vector de numere int si dimensiunea acestuia. Functia calculeaza minimul din vector si se calculeaza si returneaza de cate ori apare minimul in vector. Prototip: int contor_minim(int v[], int n); b) Scrieti o functie care primeste ca parametru un vector de numere int si calculeaza si il afiseaza pe ecran. Prototip: void afiseaza(int v[], int n); c) Scrieti un program C in care testati functionalitatea functiilor implementate.
#include <stdio.h>
int contor_minim(int v[], int n) {
    int min = v[0], contor = 0;
    for (int i = 0; i < n; i++)
        if (min > v[i]) min = v[i];
    for (int i = 0; i < n; i++)
        if (v[i] == min) contor++;
    return contor;
}
void afiseaza(int v[], int n) {
    printf("Vectorul este ");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    afiseaza(v, n);
    printf("Minimul apare de %d in vector", contor_minim(v, n));
    return 0;
}

// a) Scrieti o functie care primeste ca parametru un vector de numere intregi si dimensiunea acestuia (un intreg n) si verifica daca numerele din vector sunt in progresie aritmetica. Daca sunt, functia va returna 1, altfel va returna 0. Prototip: int progresie(int v[], int n); b) Scrieti o functie care primeste ca parametri un tablou unidimensional (vector) de numere intregi si dimensiunea acestuia si il afiseaza, pe o singura linie, cu elementele despartite prin spatii. Prototip: void afiseaza(int v[], int n); c) Scrieti un program C in care testati functiile implementate. Programul citeste dimensiunea, apoi elementele vectorului, de la tastatura.
#include <stdio.h>
int progresie(int v[], int n) {
    int contor = 0;
    for (int i = 0; i < n; i++)
        if (v[i + 1] == ((v[i] + v[i + 2]) / 2)) contor++;
    return ((contor == (n - 2)) ? 1 : 0);
}
void afiseaza(int v[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    afiseaza(v, n);
    int check = progresie(v, n);
    (check) ? printf("Vectorul este progresie aritmetica") : printf("Vectorul nu este progresie aritmetica");
    return 0;
}
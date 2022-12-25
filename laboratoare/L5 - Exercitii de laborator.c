// Sa se scrie un program care citeste n numere reale (n citit de la tastatura) si afla care este maximul, respectiv minimul dintre acestea.
#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    float arr[n], min = 0.0, max = 0.0;
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        if (min > arr[i]) min = arr[i];
        if (max < arr[i]) max = arr[i];
    }
    printf("Cele %d numere sunt in intervalul [%f,%f].\n", i, min, max);
    return 0;
}

// Sa se scrie un program care citeste un numar intreg si afiseaza media cifrelor sale. 
#include <stdio.h>
int main() {
    int n, rest = 0, suma = 0;
    float rezultat = 0.0, nr = 0.0;
    scanf("%d", &n);
    if (n < 0) n *= -1;
    while (n != 0) {
        rest = n % 10;
        suma = suma + rest;
        n /= 10;
        nr += 1;
    }
    rezultat = suma / nr;
    printf("Media cifrelor este %f.", rezultat);
    return 0;
}

// Scrieti un program care, pentru un numar intreg citit de la tastatura, calculeaza cifra maxima a acestuia. 
#include <stdio.h>
int main() {
    int n, max = 0, temp;
    scanf("%d", &n);
    temp = n;
    if (temp < 0) temp *= -1;
    while (temp != 0) {
        if (max < (temp % 10)) max = temp % 10;
        temp /= 10;
    }
    printf("Numarul %d are cifra maxima %d.", n, max);
    return 0;
}

// Sa se scrie un program care, pentru un numar natural dat, creeaza un nou numar, format doar din cifrele pare ale acestuia (in aceeasi ordine in care acestea apar in numarul original!).
#include <stdio.h>
int main() {
    int n, temp, rest = 0, cnt = 0;
    scanf("%d", &n);
    temp = n;
    int arr[10];
    while (temp != 0) {
        rest = temp % 10;
        if (rest % 2 == 0) arr[cnt++] = rest;
        temp /= 10;
    }
    printf("Numarul format din cifrele pare ale lui %d este ", n);
    if (cnt == 0) printf("0");
    else {
        for (int i = cnt - 1; i >= 0; i--)
            printf("%d", arr[i]);
    }
    printf(".");
    return 0;
}

// Să se scrie un program care determină frecvența de apariție a unei cifre d  într-un număr dat  n (presupunem ca numarul este scris in baza 10). 
#include <stdio.h>
int main() {
    int n, d, temp, cnt = 0;
    scanf("%d", &n);
    scanf("%d", &d);
    temp = n;
    if (temp < 0) temp *= -1;
    if (temp == 0 && d == 0) cnt++;
    else {
        while (temp != 0) {
            if (d == (temp % 10)) cnt++;
            temp /= 10;
        }
    }
    printf("Numarul %d are %d cifre de %d.", n, cnt, d);
    return 0;
}

// Se da un nr. natural d nenul si un sir cu n numere. Aflati numarul maxim din sir, care se divide cu d.
#include <stdio.h>
int main() {
    int d, n, i, max = 0;
    do {
        scanf("%d", &d);
    } while (d == 0);
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
        if (arr[i] % d == 0 && max < arr[i]) max = arr[i];
    printf("Numarul maxim care se divide cu %d este %d.", d, max);
    return 0;
}

// Calculati rasturnatul (sau oglinditul) unui numar natural n citit de la tastatura. 
#include <stdio.h>
int main() {
    int n, temp, rest = 0, cnt = 0, v[10];
    scanf("%d", &n);
    if (n < 0) n *= -1;
    temp = n;
    if (temp == 0) printf("Oglinditul lui 0 este 0.");
    else {
        while (temp != 0) {
            rest = temp % 10;
            v[cnt++] = rest;
            temp /= 10;
        }
        printf("Oglinditul lui %d este ", n);
        for (int i = 0; i < cnt; i++)
            printf("%d", v[i]);
        printf(".");
    }
    return 0;
}

// Pentru un numar natural dat, sa se afiseze reprezentarea acetuia in baza 2.
#include <stdio.h>
int main() {
    int n, temp, v[100], cnt = 0;
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        v[cnt++] = temp % 2;
        temp /= 2;
    }
    printf("Numarul %d in baza 2 este ", n);
    for (int i = cnt - 1; i >= 0; i--)
        printf("%d", v[i]);
    return 0;
}
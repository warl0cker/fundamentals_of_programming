// Pentrun un număr natural n dat, să se afișeze reprezentarea acestuia în baza b (b<10), n și b citite de la tastatură.
#include <stdio.h>
int main() {
    int n, b;
    do {
        scanf("%d", &n);
        scanf("%d", &b);
    } while (b < 2 || b > 10);
    printf("Numarul %d in baza %d este ", n, b);
    int tmp = n, cnt = 0, rest = 0;
    while (tmp != 0) {
        tmp /= b;
        cnt++;
    }
    int arr[cnt];
    cnt = 0;
    while (n != 0) {
        rest = n % b;
        arr[cnt++] = rest;
        n /= b;
    }
    for (int i = cnt - 1; i >= 0; i--)
        printf("%d", arr[i]);
    return 0;
}

// Scrieti un program care citeste doua numere, reprezentand doi ani, si afiseaza in ce zi cade ziua programatorului in fiecare an dintre cei doi ani.
#include <stdio.h>
int main() {
    int a, b, day, leapYear;
    do {
        scanf("%d", &a);
        scanf("%d", &b);
    } while (a >= b);
    while (a <= b) {
        if (a % 400 == 0) leapYear = 1;
        else if (a % 100 == 0) leapYear = 0;
        else if (a % 4 == 0) leapYear = 1;
        else leapYear = 0;
        day = ((leapYear) ? 12 : 13);
        printf("%d septembrie %d\n", day, a);
        a++;
    }
    return 0;
}

// Scrieti un program C care calculeaza suma seriei 1 +11 + 111 + 1111 + ... , cu n termeni. folositi variabile de tip long int pentru a retine suma.
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    long int sum = 0, temp = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%ld  ", temp);
        if (i < n - 1) printf("+ ");
        sum += temp;
        temp = (temp * 10) + 1;
    }
    printf("\nSuma este : %ld.", sum);
    return 0;
}

// Scrieti un program C pentru a verifica daca un numar citit de la tastatura, este numar Armstrong. Indicatie. Un numar intreg pozitiv este numar Armstrong daca, dat n numarul de cifre abcd... = an + bn + cn + dn + ...
#include <stdio.h>
#include <math.h>
int main() {
    int n, tmp, count = 0, rest = 0, sum = 0;
    scanf("%d", &n);
    tmp = n;
    while (tmp != 0) {
        tmp /= 10;
        count++;
    }
    tmp = n;
    while (tmp != 0) {
        rest = tmp % 10;
        sum += pow(rest, count);
        tmp /= 10;
    }
    (sum == n) ? printf("Numarul %d este numar Armstrong, cu suma %d", n, sum) : printf("Numarul %d NU este numar Armstrong, are suma %d", n, sum);
    return 0;
}
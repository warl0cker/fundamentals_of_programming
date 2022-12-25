// Scrieti un program care citeste de la tastatura un numar natural format din cel mult 8 cifre. Programul afiseaza toate numerele obtinute prin transformarea cifrei celei mai nesemnificative in cifra cea mai semnificativa. 
#include <stdio.h>
#include <math.h>
int main() {
    int i, n, count = 0;
    scanf("%d", &n);
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    for (i = 1; i <= count; i++) {
        n = (n % 10) * pow(10, count - 1) + n / 10;
        printf("%d\n", n);
    }
    printf("STOP\n");
    return 0;
}

// Scrieti un program care reprezinta un calculator de buzunar, adica citeste doua numere (reale) si semnul unei operatii (+, -, *, /) si afiseaza rezultatul operatiei respective.
#include <stdio.h>
int main() {
    float a, b, s;
    char op;
    scanf("%f%c%f", &a, &op, &b);
    switch (op) {
        case '+':
            s = a + b;
            break;
        case '-':
            s = a - b;
            break;
        case '*':
            s = a * b;
            break;
        case '/':
            s = a / b;
            break;
    }
    printf("Rezultatul este %f\n", s);
    return 0;
}
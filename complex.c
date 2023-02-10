#include<math.h>
#include<stdio.h>

typedef struct complex{
    float re;
    float im;
} Complex;
Complex citeste_complex() {
    Complex x;
    printf("Introduceti partea reala ");
    scanf("%f", &x.re);
    printf("Introduceti partea imaginara ");
    scanf("%f", &x.im);
    return x;
}
void afiseaza_complex(Complex x) {
    printf("Numarul complex este %.2f+%.2fi\n", x.re, x.im);
}
double absolut(Complex x) {
    return sqrt(x.re * x.re + x.im * x.im);
}
int main() {
    Complex v[5];
    int i;
    for (i = 0; i < 5; i++) {
        v[i] = citeste_complex();
    }
    double max = absolut(v[0]);
    int poz = 0;
    for (i = 1; i < 5; i++) {
        if (max < absolut(v[i])) {
            max = absolut(v[i]);
            poz = i;
        }
    }
    printf("Valoarea abs max este a ");
    afiseaza_complex(v[poz]);
}

// Scrieti un program care transformă o temperatură citită de la tastatură (numar intreg) din grade Celsius in grade Farenheit. Formula de conversie este F=32+9*C/5.
#include <stdio.h>
int main() {
    int n, s;
    scanf("%d", &n);
    s = 32 + 9 * n / 5;
    printf("%d grade C = %d grade Farenheit", n, s);
    return 0;
}

// Scrieti un program care citeste de la tastatura un numar real de ani si afiseaza numarul de luni, zile si ore corespunzatoare. Presupunem ca un an are 365 de zile.
#include <stdio.h>
int main() {
    float n, luni, zile, ore;
    scanf("%f", &n);
    luni = n * 12.000000;
    printf("%f ani inseamna %f luni\n", n, luni);
    zile = n * 365.000000;
    printf("%f ani inseamna %f zile\n", n, zile);
    ore = n * 8760.000000;
    printf("%f ani inseamna %f ore\n", n, ore);
    return 0;
}
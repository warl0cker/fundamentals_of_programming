// Scrieti un program care să afișeze de trei ori mesajul "Tu esti cel mai bun programator!" pe 3 rânduri diferite.
#include <stdio.h>
int main() {
    int i;
    for (i = 0; i < 3; i++) {
        printf("Tu esti cel mai bun programator!\n");
    }
    return 0;
}

// Scrieti un program C care citeste trei numere intregi si afiseaza suma lor.
#include <stdio.h>
int main() {
    int a, b, c, s;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    s = a + b + c;
    printf("%d+%d+%d=%d", a, b, c, s);
    return 0;
}

// Scrieti un program C care citeste trei numere reale si afiseaza suma lor.
#include <stdio.h>
int main() {
    float a, b, c, s;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    s = a + b + c;
    printf("%f+%f+%f=%f\n", a, b, c, s);
    return 0;
}

// Scrieti un program care citeste de la tastatura valori pentru doua variabile intregi x si y si apoi le interschimba si afiseaza noile valori ale variabilelor.
#include <stdio.h>
int main() {
    int x, y, temp;
    scanf("%d", &x);
    scanf("%d", &y);
    temp = x;
    x = y;
    y = temp;
    printf("Dupa interschimbare, a este %d si b este %d\n", x, y);
    return 0;
}

// Se dau mai multe batoane de ciocolată, unele având 10g, altele 50g. Să se stabilească dacă se poate sau nu umple de batoane o cutie cu un anumit gramaj (citit de la tastatura). In caz afirmativ, sa se afiseze câte batoane din fiecare fel trebuie folosite pentru a o umple, astfel încât să se folosească un număr cât mai mic de batoane.
#include <stdio.h>
int main() {
    int g, b50 = 0, b10 = 0;
    scanf("%d", &g);
    if (g % 10 == 0) {
        b50 = g / 50;
        g = g - b50 * 50;
        b10 = g / 10;
        printf("Cutia poate fi umpluta cu %d batoane de 50g si %d batoane de 10g.\n", b50, b10);
    } else {
        printf("Cutia nu poate fi umpluta cu batoane de 50g si 10g.\n");
    }
    return 0;
}
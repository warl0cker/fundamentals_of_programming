// Scrieti un program care citeste de la tastatura un numar intreg n si verifica daca este par.
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n % 2 == 0) printf("%d este par\n", n);
    else printf("%d este impar\n", n);
    return 0;
}

// Să se calculeze suma cifrelor unui număr întreg n, citit de la tastatură. Indicaţii: 1. Folositi operatorul % pentru a afla restul impartirii a doua numere (de exemplu, 15%10 este 5, adica ultima cifra a lui 15). 2. Operatia de împărțire pentru operanzi întregi, are rezultat un număr întreg. De exemplu, 153/10 este 15. Astfel, puteti folosi acest lucru pentru a "elimina" ultima cifra a unui numar.
#include <stdio.h>
int main() {
    int n, s=0;
    scanf("%d", &n);
    if (n<0) n*=-1;
    while(n>0) {
        s = s + n % 10;
        n = n / 10;
    }
    printf("Suma cifrelor este %d", s);
    return 0;
}
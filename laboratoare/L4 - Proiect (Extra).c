// Scrieti un program care cere utilizatorului sa ghiceasca un numar, in maxim 5 incercari. Programul preia de la utilizator un numar oarecare, pe care il va folosi pentru a porni generatorul de numere aleatoare (drept seed). Programul va afisa mesaje corespunzatoare.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, check, flag = 0, read;
    scanf("%d", &n);
    srand(n);
    check = rand();
    for (int i = 0; i < 5; i++) {
        scanf("%d", &read);
        if (check > read) printf("Ai introdus un numar prea mic\n");
        if (check < read) printf("Ai introdus un numar prea mare\n");
        if (check == read) {
            printf("Ai ghicit valoarea la a %d-a incercare!.\n", i);
            flag = 1;
            break;
        }
    }
    if (!flag) printf("Nu ai ghicit valoarea din 5 incercari.\n");
    return 0;
}

/* Scrieti un program care sa implementeze un joc de X si 0. Programul va cere numele utilizatorilor la inceput. Programul va folosi o matrice pentru a stoca starea plansei de joc. La fiecare pas, programul va cere utilizatorului curent sa specifice pozitia de pe plansa de joc unde plaseaza elementul curent. Programul se incheie cand unul dintre jucatori a castigat sau cand nu mai sunt mutari posibile.
Bonus:
(1) Implementati un jucator automat, care propune mutari aleatoare valide in cadrul jocului.
(2) Implementati un jucator inteligent, care propune mutari valide, intr-o maniera orientata pentru a castiga jocul. Ce strategie puteti gandi pentru asta? */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
int checkforwin(char *a) {
    if      (a[0] == a[1] && a[1] == a[2]) return 1;
    else if (a[3] == a[4] && a[4] == a[5]) return 1;
    else if (a[6] == a[7] && a[7] == a[8]) return 1;
    else if (a[0] == a[3] && a[3] == a[6]) return 1;
    else if (a[1] == a[4] && a[4] == a[7]) return 1;
    else if (a[2] == a[5] && a[5] == a[8]) return 1;
    else if (a[0] == a[4] && a[4] == a[8]) return 1;
    else if (a[2] == a[4] && a[4] == a[6]) return 1;
    else if (a[0] != '1' && a[1] != '2' && a[2] != '3' && a[3] != '4' && a[4] != '5' && a[5] != '6' && a[6] != '7' && a[7] != '8' && a[8] != '9') return 0;
    else return -1;
}
void board(char x, char o, char *u1, char *u2, char *a) {
    int i;
    printf("\n\n");
    printf("%s: (%c)\n%s: (%c)\n\n",u1, x, u2, o);
    printf("  %c |  %c | %c\n", a[0], a[1], a[2]);
    printf("    |    |    \n");
    printf("----|----|----\n");
    printf("    |    |    \n");
    printf("  %c |  %c | %c\n", a[3], a[4], a[5]);
    printf("    |    |    \n");
    printf("----|----|----\n");
    printf("  %c |  %c | %c\n", a[6], a[7], a[8]);
    printf("    |    |    \n");
}
bool decision(char *x, char *o, char *u1) {
    char dec;
    printf("\n\n");
    do {
        printf("%s alege X sau 0:", u1);
        dec = getchar();
        scanf("%c", &dec);
    } while (dec != 'X' && dec != 'x' && dec != '0');
    if (dec == 'X' || dec == 'x') {
        *x = 'X';
        *o = '0';
    } else {
        *x = '0';
        *o = 'X';
    }
    return 1;
}
int main(void) {
    char x, o, symbol, re, start, dec;
    char u1[50], u2[3] = "PC", a[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int player = 1, choice, score = -1;
    printf("\nIntrodu numele tau: ");
    scanf("%s", u1);
    decision(&x, &o, u1);
    board(x, o, u1, u2, a);
    do {
        player = ((player % 2) ? 1 : 2);
        if (player == 1) {
            printf("%s Tasteaza o cifra intre 1-9: ", u1);
            scanf("%d", &choice);
        } else choice = rand() % 10;
        symbol = ((player == 1) ? x : o);
        if (choice == 1 && a[0] == '1') a[0] = symbol;
        else if (choice == 2 && a[1] == '2') a[1] = symbol;
        else if (choice == 3 && a[2] == '3') a[2] = symbol;
        else if (choice == 4 && a[3] == '4') a[3] = symbol;
        else if (choice == 5 && a[4] == '5') a[4] = symbol;
        else if (choice == 6 && a[5] == '6') a[5] = symbol;
        else if (choice == 7 && a[6] == '7') a[6] = symbol;
        else if (choice == 8 && a[7] == '8') a[7] = symbol;
        else if (choice == 9 && a[8] == '9') a[8] = symbol;
        else {
            printf("Selectie incorecta!\n");
            player--;
        }
        score = checkforwin(a);
        player++;
        board(x, o, u1, u2, a);
    } while (score == -1);
    (score == 1) ? ((player == 2) ? printf("\n\n%s a castigat!\n\n", u1) : printf("\n\n%s a castigat!\n\n", u2)) : printf("\n\nJocul este remiza!\n\n");
    return 0;
}
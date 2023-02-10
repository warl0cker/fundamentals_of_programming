// algoritm de sortare de la mic la mare
#include<stdio.h>
int main() {
    int v[10] = {3, 5, 2, 5, 7, 9, 3, 4, 8, 0};
    int i, j;
    for (i = 0; i < 10; i++) {
        printf("\nLa pozitia %i:\n", i);
        //sunt la pozitia i si vreau sa aduc aici cel mai mic element posibil din cele de la i pana la sf
        for (j = i + 1; j < 10; j++) {
            if (v[i] > v[j]) {
                //schimb intre ele
                printf("\tSchimb intre poz %i si poz %i\n", i, j);
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
        for (j = 0; j < 10; j++)
            printf("%i, ", v[j]);
    }
}

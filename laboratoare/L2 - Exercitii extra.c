/* Se consideră n mulţimi. Fiecare mulţime conţine numai numere consecutive. Pentru a da aceste mulţimi este suficient să dăm primul şi ultimul element. Scrieţi un program care să determine elementele intersecţiei celor n mulţimi.
Date de intrare: De la tastatură se citeşte numărul n. Apoi perechi de numere, câte una pe un rând, separate prin câte un spaţiu, care reprezintă cel mai mic, respectiv cel mai mare element din fiecare mulţime.
Date de ieşire: Pe ecran se va afişa pe prima linie elementele intersecţiei cu câte un spaţiu între ele. */
#include <stdio.h>
int main() {
    int n, x, y, maxim = 0, minim = 9999;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &x, &y);
        if (x > maxim) maxim = x;
        if (y < minim) minim = y;
    }
    if ((minim - maxim < 0) || (maxim == 0 && minim == 9999)) printf("Intersectia este multimea vida.");
    else {
        printf("Intersectia este multimea ");
        for (int i = maxim; i <= minim; i++)
            printf("%d ", i);
    }
    return 0;
}

// Un tren este format din n vagoane de clasa I-a şi a II-a. Şeful de tren nu vrea să fie mai mult de k vagoane de aceeaşi clasă unul după altul. Introducându-se o aranjare a vagoanelor, să se testeze dacă există mai mult de k vagoane de acelaşi fel consecutive. Se va afişa un mesaj corespunzător. În caz afirmativ, să se afişeze şi poziţia de început a subşirurilor cu mai mult de k elemente de acelaşi fel. 
#include <stdio.h>
int main() {
    int n, k, x, aux, cnt = 1, p = 1;
    scanf("%d%d", &n, &k);
    scanf("%d", &x);
    aux = x;
    for (int i = 2; i <= n; i++) {
        p++;
        scanf("%d", &x);
        if (x == aux) cnt++;
        else {
            if (cnt >= 3) printf("%d vagoane clasa %d incepand cu pozitia %d\n", cnt, aux, p - cnt);
            cnt = 1;
        }
        aux = x;
    }
    if (cnt >= 3) printf("%d vagoane clasa %d incepand cu pozitia %d\n", cnt, aux, p - cnt + 1);
    return 0;
}

/* Scrieti un program care afiseaza un model de tip "cutie". Programul va citi un numar (<100) si va afisa un model, de tipul urmator:

daca numarul introdus este 4, atunci modelul afisat va fi

    4 4 4 4 4 4 4
    4 3 3 3 3 3 4   
    4 3 2 2 2 3 4   
    4 3 2 1 2 3 4   
    4 3 2 2 2 3 4   
    4 3 3 3 3 3 4   
    4 4 4 4 4 4 4 */
#include <stdio.h>
int main() {
    int v;
    scanf("%d", &v);
    int i, fill = v, startRow = 0, startColumn = 0;
    int iterator = v * 2 - 1, endRow = v * 2 - 1, endColumn = v * 2 - 1;
    int matrix[iterator][iterator];
    while (startRow < endRow && startColumn < endColumn) {
        for (i = startColumn; i < endColumn; ++i)
            matrix[startRow][i] = fill;
        startRow++;
        for (i = startRow; i < endRow; ++i)
            matrix[i][endColumn - 1] = fill;
        endColumn--;
        if (startRow < endRow) {
            for (i = endColumn - 1; i >= startColumn; --i)
                matrix[endRow - 1][i] = fill;
            endRow--;
        }
        if (startColumn < endColumn) {
            for (i = endRow - 1; i >= startRow; --i)
                matrix[i][startColumn] = fill;
            startColumn++;
        }
        fill--;
    }
    for (i = 0; i < iterator; i++) {
        for (int j = 0; j < iterator; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    return 0;
}

// Scrieti un program care citeste o secventa de cel mult 10 numere si separat, un alt numar. Programul va afisa indicele elementelor din secventa, a caror suma este egala cu numarul citit.
#include <stdio.h>
int main() {
    int n, p, s, found = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &p);
    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            s = arr[i] + arr[j];
            if (s == p) {
                printf("Indicele valorilor care insumate sunt valoarea: %d\n%d %d\n", p, i, j);
                found = 1;
            }
        }
        if (found == 1) break;
    }
    return 0;
}
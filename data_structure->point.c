/* Proiectati structuri de date pentru reprezentarea unui punct.
 * Scrieti functii de citire de la tastatura si scriere pe ecran pentru fiecare tip de date: punct.
 * Creati un vector de puncte si citii datele pentru el de la tastatura si ordonati-l in ordine crescatoare a distantei fata de origine a acestora.
 * Scrieti un program C care utilizeaza cele de mai sus.
 */

#include<stdio.h>
#include<math.h>
#define N 3
typedef struct point {
    int x, y;
    char name[16];
    double dist_origine;
} Point;
Point read_point() {
    printf("Point: \n");
    Point p;
    scanf(" %s", p.name);
    scanf("%d", &p.x);
    scanf("%d", &p.y);
    return p;
}
void display_point (Point p) {
    printf("Point %s(%d, %d) \n", p.name, p.x, p.y);
}
double distance(Point p, Point q) {
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}
int main() {
    Point pt[N];
    int i, j;
    for (i = 0; i < N; i++) {
        pt[i] = read_point();
    }
    Point origin = {0, 0, "O"};
    for (i = 0; i < N; i++) {
        pt[i].dist_origine = distance(origin, pt[i]);
    }
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (pt[i].dist_origine > pt[j].dist_origine) {
                Point auxp = pt[i];
                pt[i] = pt[j];
                pt[j] = auxp;
            }
        }
    }
    printf("Vectorul de puncte ordonate \n");
    for (i = 0; i < N; i++) {
        display_point(pt[i]);
    }
}

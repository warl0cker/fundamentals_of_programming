/* Proiectati structuri de date pentru reprezentarea unui punct, triunghi, dreptunghi, cerc.
 * Scrieti functii de citire de la tastatura si scriere pe ecran pentru fiecare tip de date: punct, triunghi, dreptunghi, cerc.
 * Scrieti cite o functie care determina aria, pentru obiecte de tipul punct, triunghi, dreptunghi, cerc. Aria unui punct se va considera 0.
 * Scrieti cate o functie care realizeaza translatia obiectelor punct, triunghi, dreptunghi, cerc, cu o anumita distanta pe axa Ox, respectiv Oy.
 * Scrieti un program C care utilizeaza cele de mai sus.
 */

#include<stdio.h>
#include<math.h>

typedef struct point {
    int x, y;
    char name[16];
} Point;
typedef struct triangle{
    Point v1, v2, v3;
} Triangle;
typedef struct circle{
    Point center;
    double radius;
} Circle;
Point read_point(void) {
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
double area_triangle(Triangle t) {
    double l1 = distance(t.v1, t.v2);
    double l2 = distance(t.v2, t.v3);
    double l3 = distance(t.v3, t.v1);
    double s = (l1 + l2 + l3) / 2;
    return sqrt(s * (s - l1) * (s - l2) * (s - l3));
}
Circle read_circle() {
    Circle c;
    printf("Enter the center of the circle: ");
    c.center = read_point();
    printf("Enter the radius: ");
    scanf("%lf", &c.radius);
    return c;
}
void display_circle(Circle c) {
    printf("The circle with the center in ");
    display_point(c.center);
    printf("It has the radius %lf\n", c.radius);
}
double area_circle(Circle c) {
    return (M_PI * c.radius * c.radius);
}
int main() {
    Point p1 = read_point();
    Point p2 = read_point();
    Point p3 = read_point();
    printf("The points are: \n");
    display_point(p1);
    display_point(p2);
    display_point(p3);
    Triangle t;
    t.v1 = p1;
    t.v2 = p2;
    t.v3 = p3;
    double d1 = distance(p1, p2);
    double d2 = distance(p3, p2);
    double d3 = distance(p1, p3);
    if (d1 + d2 > d3 && d1 + d3 > d2 && d2 + d3 > d1) {
        printf("We can build a triangle through these points\n");
        printf("The area of the triangle is %lf\n", area_triangle(t));
    } else {
        printf("A triangle cannot be built through these points\n");
    }
    Circle cerc = read_circle();
    display_circle(cerc);
    printf("The area of the circle is %lf\n", area_circle(cerc));
    return 0;
}

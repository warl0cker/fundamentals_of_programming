#include <stdio.h>

typedef struct Student Student;
struct Student {
    char  specializare[30];
    int   an_studiu;
    int   grupa;
    char  nume[30];
    float medie;
};

// 1. Scrieti o functie care citeste valori corespunzatoare campurilor structurii de mai sus. Functia va returna o variabila de tip Student. Prototip: Student citeste();
Student citeste() {
    Student x;
    printf("[*]      Introduceti specializarea: ");
    //getchar();
    scanf(" %29[^\n]", x.specializare);
    printf("[*]     Introduceti anul de studiu: ");
    scanf("%d", &x.an_studiu);
    printf("[*]              Introduceti grupa: ");
    scanf("%d", &x.grupa);
    printf("[*] Introduceti numele studentului: ");
    //getchar();
    scanf(" %29[^\n]", x.nume);
    printf("[*]              Introduceti media: ");
    scanf("%f", &x.medie);
    return x;
}

// 2. Scrieti o functie care afiseaza valorile campurilor unei variabile de tip Student. Prototip: void print(Student x);
void print(Student x) {
    printf("[+] Datele studentului: %s\n  [-]  Specializarea: %s\n  [-] Anul de studiu: %d\n  [-]          Grupa: %d\n  [-]          Media: %f\n",
           x.nume, x.specializare, x.an_studiu, x.grupa, x.medie);
}

int main() {
    printf("[*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*]\n");
    printf("[?] Cati studenti vom folosi: ");
    int n;
    scanf("%d", &n);
    Student vector[n];

    // 3. Utilizand functiile de mai sus cititi si apoi afisati datele a n studenti si memorati-le intr-un vector cu elemente de tip Student.
    for (int i = 0; i < n; i++) {
        vector[i] = citeste();
        printf("\n");
        print(vector[i]);
    }

    // 4. Afisati datele tuturor studentilor din anul 1.
    printf("[*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*]\n");
    for (int i = 0; i < n; i++)
        printf("[%d] Studentul %s, de la %s, este anul %d, in grupa %d, cu media %f\n", i,
               vector[i].nume, vector[i].specializare, vector[i].an_studiu, vector[i].grupa, vector[i].medie);

    // 5. Afisati datele studentului/studentilor cu cea mai mare medie.
    printf("[*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*]\n");
    float max = vector[0].medie;
    for (int i = 0; i < n; i++)
        if (max < vector[i].medie) max = vector[i].medie;
    printf("[*] Studentii cu cea mai mare nota sunt:\n");
    for (int i = 0; i < n; i++)
        if (vector[i].medie == max) print(vector[i]);

    // 6. Sortati vectorul de studenti crescator dupa medie.
    printf("[*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*]\n");
    Student temp;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (vector[i].medie > vector[j].medie) {
                temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
            }
        }
    }
    printf("[*] Mediile in ordine crescatoare sunt:\n");
    for (int i = 0; i < n; i++)
        print(vector[i]);

    // the end.
    printf("[*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*][*]\n");
    return 0;
}
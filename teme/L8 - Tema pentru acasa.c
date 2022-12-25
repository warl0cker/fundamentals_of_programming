/* Se dă un şir de numere reale. Scrieti cate o functie care adreseaza fiecare din situatiile de mai jos. In final, scrieti un program C care sa demonstreze cum se utilizeaza aceste functii.
a) Să verifice dacă şirul este o progresie aritmetică (diferenţa dintre oricare două numere alăturate este aceeaşi, de exemplu: 1,4,7,10,13). Prototip:
int este_progresie_aritmetica(int v[], int n);
b) Sa verifice daca sirul contine doar numere in ordine crescatoare. Prototip:
int este_crescator(int v[], int n);
c) Sa verifice daca sirul contine doar numere in ordine descrescatoare.
int este_descrescator(int  v[], int n); */
#include <stdio.h>
int este_progresie_aritmetica(int v[], int n) {
    int contor = 0;
    for (int i = 0; i < n; i++)
        if (v[i + 1] == ((v[i] + v[i + 2]) / 2)) contor++;
    return ((contor == (n - 2)) ? 1 : 0);
}
int este_crescator(int v[], int n) {
    int contor = 0;
    for (int i = 0; i < n; i++)
        if (v[i] < v[i + 1]) contor++;
    return ((contor == n-1) ? 1 : 0);
}
int este_descrescator(int  v[], int n) {
    int contor = 0;
    for (int i = 0; i < n; i++)
        if (v[i] > v[i + 1]) contor++;
    return ((contor == n-1) ? 1 : 0);
}
int main() {
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    int check1 = este_progresie_aritmetica(v, n);
    int check2 = este_crescator(v, n);
    int check3 = este_descrescator(v, n);
    printf("Sirul este:\n");
    (check1) ? printf("- Progresie aritmetica: DA\n") : printf("- Progresie aritmetica: NU\n");
    (check2) ? printf("- Crescator: DA\n") : printf("- Crescator: NU\n");
    (check3) ? printf("- Descrescator: DA\n") : printf("- Descrescator: NU\n");
    return 0;
}

//Sa se scrie o functie care primeste ca parametri un vector si dimensiunea acestuia (un intreg n) si numara cate numere pare contine acest vector. Antetul functiei va fi: int nr_pare(int v[], int dim);
int nr_pare(int v[], int dim) {
    int contor = 0;
    for (int i = 0; i < dim; i++)
        if (v[i] % 2 == 0) contor++;
    return contor;
}

// Sa se scrie o functie care primeste ca parametri un vector si dimensiunea acestuia (un intreg n) si afla maximul din acest vector. Antetul functiei va fi: double max(double v[], int dim);
double max(double v[], int dim){
	double max = v[0];
	for (int i = 0; i < dim; i++)
        if (max < v[i]) max = v[i];
	return max;
}

/* a) Scrieti o functie care primeste ca parametru un vector si il initializeaza cu valori introduse de la tastatura.
void citeste_vector( double vector[ ], int n ) ;
b) Scrieti o functie care primeste un vector ca parametru si il afiseaza pe ecran.
void afiseaza_vector( double vector[ ], int n ) ;
c) Scrieti o functie care calculeaza media aritmetica a unui tablou de numere double. Functia va primi ca parametri tabloul si dimensiunea acestuia si va returna media aritmetica. Antetul functiei va fi 
double medie( double vector[ ], int n ) ;
d) Folositi urmatorul program C care sa testeze aceste functii.
#include <stdio.h>
#define N 5
void citeste_vector( double vector[ ], int n ) ;
void afiseaza_vector( double vector[ ], int n ) ;
double medie( double vector[ ], int n ) ;
int main() {
	double data[N]={0} ;
	citeste_vector( data, N );
	afiseaza_vector(data, N);
	printf("Media aritmetica este %lf.\n", medie( data, N ));
} */
#include <stdio.h>
#define N 5
void citeste_vector(double vector[], int n);
void afiseaza_vector(double vector[], int n);
double medie(double vector[], int n);
int main() {
    double data[N] = {0};
    citeste_vector(data, N);
    afiseaza_vector(data, N);
    printf("Media aritmetica este %lf.\n", medie(data, N));
}
void citeste_vector(double vector[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%lf", &vector[i]);
}
void afiseaza_vector(double vector[], int n) {
    for (int i = 0; i < n; i++)
        printf("%lf ", vector[i]);
    printf("\n");
}
double medie(double vector[], int n) {
    double suma = 0;
    for (int i = 0; i < n; i++)
        suma += vector[i];
    suma /= n;
    return suma;
}

// Scrieti o functie gaseste_cifra, cu doi parametri.Antetul functiei va fi int gaseste_cifra(int a, int b); Functie primeste prin intermediul parametrului a un numar natural cu cel mult 8 cifre si prin intermediul parametrului b o cifra. Functia returneaza numarul de aparitii ale cifrei b in scrierea numarului a.
int gaseste_cifra(int a, int b) {
    int contor = 0, rest = 0;
    while (a != 0) {
        rest = a % 10;
        if (rest == b) contor++;
        a /= 10;
    }
    return contor;
}

// Sa se scrie o functie care calculeaza suma a doi vectori (element cu element) pe primele n pozitii (n primit de asemenea ca parametru). Rezultatul va fi stocat intr-un vector, primit de asemenea ca parametru. void suma (int v1[], int v2[], int s[], int dim);
#include <stdio.h>
void suma (int v1[], int v2[], int s[], int dim){
	for(int i=0; i<dim; i++)
		s[i] = v1[i] + v2[i];
}
int main() {
    int testarray1[] = {14, 13, 12, 11, 15};
    int testarray2[] = {1, 12, 3, 5, 5};
    int dim = 5;
    int sumarray[5];
    suma(testarray1, testarray2, sumarray, dim);
    int i;
    printf("Vectorul suma este: ");
    for (i = 0; i < dim; i++) {
        if (i == dim - 1) printf("%d.", sumarray[i]);
        else printf("%d, ", sumarray[i]);
    }
    return 0;
}
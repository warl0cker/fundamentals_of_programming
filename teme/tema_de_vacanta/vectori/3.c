// 3. Afisati elementele de pe pozitii impare dintr-un vector de dimensiune n. Prototip: void print_poz_impare(int v[], int n);
void print_poz_impare(int v[], int n) {
    for (int i = 0; i < n; i++)
        if (i % 2 != 0) printf("%d ", v[i]);
}
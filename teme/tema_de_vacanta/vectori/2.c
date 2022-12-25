// 2. Afisati pozitiile dintr-un vector de dimensiune n pe care se gasesc numere pozitive. Prototip: void print_poz_pozitive(int v[], int n);
void print_poz_pozitive(int v[], int n){
    for (int i = 0; i < n; i++)
        if (v[i] >= 0) printf("%d ", i);
}
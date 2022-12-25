// 1. Afisati elementele pozitive dintr-un vector de dimensiune n. Prototip: void print_pozitive(int v[], int n);
void print_pozitive(int v[],int n) {
    for (int i = 0; i < n; i++)
        if (v[i] >= 0) printf("%d ", v[i]);
}
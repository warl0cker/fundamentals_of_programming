// 4. Afisati elementele unui vector de dimensiune n in ordine inversa. Prototip: void print_reverse(int v[], int n);
void print_reverse(int v[], int n) {
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", v[i]);
}
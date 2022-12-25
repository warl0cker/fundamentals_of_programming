// 9. Calculati numarul de aparitii ale valorii maxime dintr-un vector de dimensiune n. Prototip: int aparitii_maxim(int v[], int n);
int aparitii_maxim(int v[], int n) {
    int max = v[0], contor = 0;
    for (int i = 1; i < n; i++)
        if (max < v[i]) max = v[i];
    for (int i = 0; i < n; i++)
        if (max == v[i]) contor++;
    return contor;
}
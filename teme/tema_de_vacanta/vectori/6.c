// 6. Verificati daca elementele unui vector de dimensiune n formeaza o progresie geometrica. Prototip: int progresie_geom(float v[], int n);
int progresie_geom(float v[], int n) {
    int p = 1;
    for (int i = 2; i < n-1; i++)
        if (v[i] / v[1] != v[i - 1]) p = 0;
    return p;
}

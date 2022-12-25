// 8. Calculati media aritmetica a elementelor nenule dintr-un vector de dimensiune n. Prototip: float media_aritmetica(int v[], int n);
float media_aritmetica(int v[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++)
        suma += v[i];
    return (suma / n);
}
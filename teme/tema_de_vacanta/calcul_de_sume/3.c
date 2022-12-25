// 3. Calculati suma 1/2 + 2/3 + ... + n/(n +1). Prototip: float suma_rapoarte(int n);
float suma_rapoarte(int n) {
    float suma = 0, final = 0;
    for (float i = 1; i <= n; i++)
        suma += (i / (i + 1));
    return suma;
}
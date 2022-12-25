// 2. Calculati suma tuturor numerelor mai mici ca n, divizibile cu 3. Prototip: int suma_mult3(int n);
int suma_mult3(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++)
        if (i % 3 == 0) suma += i;
    return suma;
}
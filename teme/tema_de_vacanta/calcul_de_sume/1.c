// 1. Calculati suma 1^2 – 2^2 + 3^2 – ... ±n^2. Prototip: int suma_puteri(int n);
int suma_puteri(int n) {
    int suma = 0, product = 0;
    for (int i = 1; i <= n; i++) {
        product = i * i;
        if (i % 2 == 0) product *= -1;
        suma += product;
    }
    return suma;
}
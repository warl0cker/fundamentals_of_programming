// 1. Afisati divizorii naturali ai unui numar intreg. Prototip: void print_divizori(int n);
void print_divizori(int n) {
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0) printf("%d ", i);
}
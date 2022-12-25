// 10. Afisati ultima pozitie pe care se gaseste un element intr-un vector de dimensiune n. Prototip: int cauta_ultim(float v[], int n, float x);
int cauta_ultim(float v[], int n, float x) {
    for (int i = n - 1; i >= 0; i--)
        if (x == v[i]) return i;
    return 0;
}
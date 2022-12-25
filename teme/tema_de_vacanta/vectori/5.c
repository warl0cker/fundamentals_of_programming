// 5. Verificati daca elementele unui vector de dimensiune n formeaza o progresie aritmetica. Prototip: int progresie_aritm(float v[], int n);
int progresie_aritm(float v[], int n){
    int contor = 0;
    for (int i = 0; i < n; i++)
        if (v[i + 1] == ((v[i] + v[i + 2]) / 2)) contor++;
    return ((contor == (n - 2)) ? 1 : 0);
}
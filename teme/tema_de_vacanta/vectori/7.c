// 7. Calculati produsul scalar al doi vectori de dimensiune n. Prototip: float produs_scalar(float v[], float u[], int n);
float produs_scalar(float v[], float u[], int n) {
    float produs = 0;
    for (int i = 0; i < n; i++)
        produs += v[i] * u[i];
    return produs;
}
// 4. Calculati ordinul de multiplicitate al unui numar prim k intr-un numar intreg n (ordinul de multiplicitate al lui k in n este egal cu puterea la care apare k in descompunerea in factori primi a lui n). Prototip: int ordin_mult(int n, int k);
int ordin_mult(int n, int k){
    int contor = 0;
    if (n % k == 0) {
        while (n % k == 0) {
            n /= k;
            contor++;
        }
        return contor;
    } else return 0;
}
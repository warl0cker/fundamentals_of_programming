// Scrieti o functie care calculeaza cea mai mare putere a lui 2, mai mica sau egala cu un numar n, primit ca parametru in functie. Prototip: int cea_mai_mare_putere(int n);
int cea_mai_mare_putere(int n) {
    int count = 1;
    if (n == 0) return 0;
    else if (n == 2) return 1;
    else {
        while (n > 2) {
            n /= 2;
            ++count;
        }
    }
    return count;
}

// Scrieti o functie care returneaza cifra care apare cel mai des in cadrul unui numar natural n, primit ca parametru. Daca exista mai multe cifre cu acelasi (cel mai mare) numar de aparitii, functia o va returna pe cea mai mare dintre ele. Prototip: int cifraCeaMaiIntalnita(int n);
int cifraCeaMaiIntalnita(int n) {
    int max = 0, count = 1, arr[100], occur[100];
    while (n != 0) {
        int rest = n % 10;
        if (max < rest) max = rest;
        arr[count - 1] = rest;
        n /= 10;
        count++;
    }
    for (int i = 0; i < count; i++) {
        int contor = 1;
        for (int j = i + 1; j <= count; j++) {
            if (arr[i] == arr[j]) ++contor;
        }
        occur[i] = contor;
    }
    int max2 = occur[0];
    for (int i = 0; i < count; i++) {
        if (max2 < occur[i]) {
            max2 = occur[i];
            max = arr[i];
        }
    }
    return max;
}
		
// Scrieţi o funcţie care verifica dacă un număr întreg n conţine cifra c. Numerele n şi c vor fi date ca parametri. Functia va returna numarul de aparitii ale cifrei in numar, sau 0, in cazul in care cifra nu apare in numar. Antetul funcţiei este urmatorul: int contine(int n, int c).
int contine(int n, int c) {
    if (n == 0) return 0;
    int count = 0;
    while (n != 0) {
        int rest = n % 10;
        if (rest == c) ++count;
        n /= 10;
    }
    return count;
}

// Scrieţi o funcţie care să verifice dacă un număr întreg este prim sau nu. Funcţia va returna valoarea 1 dacă argumentul este număr prim şi 0 în caz contrar. Prototip: int verifica_prim(int n);
int verifica_prim(int n) {
    int prime = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n == 0 || n == 1) {
            prime = 0;
            break;
        }
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }
    return ((prime) ? 1 : 0);
}

// Scrieţi o funcţie care calculeaza numărul de cifre ale unui număr întreg nenul dat ca parametru. Prototip: int nr_cifre(int n);
int nr_cifre(int n) {
    if (n == 0) return 1;
    int count = 0;
    if (n < 0) n *= -1;
    while (n != 0) {
        n /= 10;
        ++count;
    }
    return count;
}

// Scrieti o functie care calculeaza ordinul de multiplicitate al unui numar d intr-un intreg n. Ordinul de multiplicitate al lui d in n este egal cu puterea la care apare d in descompunerea in factori primi a lui n). Prototip: int ordin_mult(int n, int d);
int ordin_mult(int n, int d) {
    int count = 0;
    if (n % d == 0) {
        while (n % d == 0) {
            n /= d;
            count++;
        }
        return count;
    } else return 0;
}

//Scrieti o functie care calculeaza produsul cifrelor pare dintr-un numar n intreg, citit de la tastatura. Prototip: int produs_cifre_pare(int n);
int produs_cifre_pare(int n) {
    int produs = 1;
    while (n != 0) {
        int rest = n % 10;
        if (rest % 2 == 0) produs *= rest;
        n /= 10;
    }
    return ((produs==1) ? 0 : produs);
}
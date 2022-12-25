// 1. Afisati toate pozitiile pe care se gaseste un caracter intr-un sir de caractere. Prototip: void print_poz(char s[], char c);
void print_poz(char s[], char c) {
    int length = strlen(s);
    for (int i = 0; i < length - 2; i++)
        if (s[i] == c) printf("%d ", i);
}
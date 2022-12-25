// 3. Numarati cate litere contine un sir de caractere. Prototip: int numar_litere(char s[]);
int numar_litere(char s[]) {
    int contor = 0;
    int length = strlen(s);
    for (int i = 0; i < length; i++)
        if (isalpha(s[i])) contor++;
    return contor;
}
// 2. Numarati cate vocale contine un sir de caractere. Prototip: int numar_vocale(char s[]); 
int numar_vocale(char s[]) {
    int contor = 0;
    int length = strlen(s);
    for (int i = 0; i < length; i++)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') contor++;
    return contor;
}
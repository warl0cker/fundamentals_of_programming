// Să se scrie o funcţie,  intr-un program, care primeşte ca parametri un caracter şi un şir de caractere şi returnează pozitia pe care se găseşte prima apariţie  a caracterului în şir.
#include <stdio.h>
#include <string.h>
char prima_aparitie(char de_cautat, char *sir) {
    int length = strlen(sir);
    for (int i = 0; i < length; i++)
        if (de_cautat == sir[i]) return i;
    return 0;
}
int main() {
    char sir[100], de_cautat;
    scanf("%99[^\n]", sir);
    scanf(" %c", &de_cautat);
    int check = prima_aparitie(de_cautat, sir);
    if (check) printf("Caracterul %c se afla pe pozitia %d in sirul: %s.", de_cautat, check, sir);
    else printf("Caracterul %c nu se afla in sirul: %s.", de_cautat, sir);
    return 0;
}

// Scrieţi un program care calculează şi afişează statistici despre un şir de caractere citit de la tastatură: numărul total de caractere, numărul de litere, numărul de cifre.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int length = 0, numbers = 0, letters = 0;
    char sir[100];
    scanf("%99[^\n]", sir);
    length = strlen(sir);
    for (int i = 0; i < length; i++) {
        if (isdigit(sir[i])) numbers++;
        else if (isalpha(sir[i])) letters++;
    }
    printf("Sirul: %s are %d caractere %d litere %d cifre", sir, length, letters, numbers);
    return 0;
}

// Scrieţi o funcţie, intr-un program, care primeşte ca parametri un şir de caractere şi un caracter şi returnează numărul de apariţii ale caracterului în şir.
#include <stdio.h>
#include <string.h>
char numar_aparitii(char de_cautat, char *sir) {
    int contor = 0;
    int length = strlen(sir);
    for (int i = 0; i < length; i++)
        if (de_cautat == sir[i]) contor++;
    return contor;
}
int main() {
    char sir[100], de_cautat;
    scanf("%99[^\n]", sir);
    scanf(" %c", &de_cautat);
    printf("Caracterul %c apare de  %d ori in sirul: %s.", de_cautat, numar_aparitii(de_cautat, sir), sir);
    return 0;
}

// Scrieţi o funcţie, intr-un program, care primeşte ca parametri un şir de caractere şi doua caractere inlocuieste toate aparitiile primului caracter in sir cu cel de al doilea.
#include <stdio.h>
#include <string.h>
void inlocuieste(char *sir, char a, char b) {
    int length = strlen(sir);
    for (int i = 0; i < length; i++) {
        if (sir[i] == a) sir[i] = b;
        printf("%c", sir[i]);
    }
}
int main() {
    char sir[100], a, b;
    scanf("%99[^\n]", sir);
    scanf(" %c", &a);
    scanf(" %c", &b);
    inlocuieste(sir, a, b);
    return 0;
}

// Scrieţi o funcţie, intr-un program, care testează dacă un şir de caractere primit ca parametru este palindrom. Funcţia va returna 1 dacă şirul este palindrom şi 0 altfel.
#include <stdio.h>
#include <string.h>
int este_palindrom(char *sir) {
    int stanga = 0;
    int dreapta = strlen(sir) - 1;
    while (dreapta > stanga) {
        if (sir[stanga++] != sir[dreapta--])
            return 0;
    }
    return 1;
}
int main() {
    char sir[100];
    scanf("%99[^\n]", sir);
    int check = este_palindrom(sir);
    (check) ? printf("%s este palindrom", sir) : printf("%s nu este palindrom", sir);
}

// Scrieţi un program C care pornind de la un şir citit de la tastatură, construieşte şi afişează şirul care conţine cifrele din cel iniţial, gestionat ca valoare numerica, long int.
#include <stdio.h>
#include <string.h>
int main() {
    char sir[100];
    scanf("%99[^\n]", sir);
    long int final = 0;
	int length = strlen(sir);
    for (int i = 0; i < length; i++){
        if (sir[i] >= '0' && sir[i] <= '9') {
            final = final * 10 + (sir[i] - '0');
		}
	}
    printf("%ld", final);
    return 0;
}

// Scrieţi un program C care pornind de la un şir citit de la tastatură, construieşte şi afişează şirul care conţine majusculele literelor din cel iniţial, fara a utiliza functia de biblioteca strupr.
#include <stdio.h>
int main() {
    char sir[100];
    scanf("%99[^\n]", sir);
    for (int i = 0; sir[i] != '\0'; i++) {
        if (sir[i] >= 'a' && sir[i] <= 'z') sir[i] -= 32;
        printf("%c", sir[i]);
    }
    return 0;
}

// Scrieţi un program C care pornind de la un şir citit de la tastatură, construieşte şi afişează şirul care conţine minusculele vocalelor din cel iniţial;
#include <stdio.h>
int main() {
    char sir[100];
    scanf("%99[^\n]", sir);
    for (int i = 0; sir[i] != '\0'; i++) {
        if (sir[i] == 'a' || sir[i] == 'e' || sir[i] == 'i' || sir[i] == 'o' || sir[i] == 'u')
            printf("%c", sir[i]);
    }
    return 0;
}

// Scrieţi un program C care pornind de la un şir citit de la tastatură, construieşte şi afişează inversul sirului initial.
#include <stdio.h>
#include <string.h>
int main() {
    char sir[100];
    scanf("%99[^\n]", sir);
    int length = strlen(sir);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", sir[i]);
    }
    return 0;
}

// Scrieţi un program C care pornind de la un şir citit de la tastatură, construieşte şi afişeaza subşirul care conţine m caractere începând de la poziţia p din şirul iniţial; m şi p se citesc de la tastatura;
#include <stdio.h>
int main() {
    char sir[100];
    scanf("%99[^\n]", sir);
    int m, p;
    scanf("%d", &m);
    scanf("%d", &p);
    for (int i = m - 1; i < m + p; i++) {
        if (sir[i] == '\0') break;
        printf("%c", sir[i]);
    }
    return 0;
}

// Scrieţi un program C care pornind de la un şir citit de la tastatură, construieşte şi afişeaza subşirul care conţine caracterele celui iniţial cu excepţia celor m începând de la poziţia p; m şi p se citesc de la tastatura;
#include <stdio.h>
#include <string.h>
int main() {
    char sir[100];
    scanf("%99[^\n]", sir);
    int m, p;
    scanf("%d", &m);
    scanf("%d", &p);
    int length = strlen(sir);
    for (int i = 0; i < length; i++) {
        if (i >= m - 1 && i < m - 1 + p) continue;
        printf("%c", sir[i]);
    }
    return 0;
}
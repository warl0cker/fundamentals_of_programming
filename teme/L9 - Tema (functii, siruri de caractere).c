// Se consideră un text cu maximum 255 de caractere, format din litere mici ale alfabetului englez şi spaţii. Textul conţine cel puţin o consoană. Scrieţi un program C care citeşte de la tastatură textul şi  afişează pe ecran numai ultima consoană care apare în text. Exemplu: dacă de la tastatură se introduce textul "Un text la intamplare" pe ecran se va afişa: r.
#include <stdio.h>
#include <string.h>
char ultima_consoana(char v[]){
    int length = strlen(v);
    char consoana[1];
    for(int i=length-2; i>=0; i--){
        if(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u') continue;
        else {
            consoana[0] = v[i];
            break;
        }
    }
    return consoana[0];
}
int main(){
    char string[255];
    fgets(string, sizeof(string), stdin);
    printf("Ultima consoana este %c", ultima_consoana(string));
    return 0;
}

// Scrieţi un program C care citeşte de la tastatură două şiruri de caractere formate din maximum 100 litere mici ale alfabetului englez şi afişează pe ecran cel mai lung sufix comun al celor două şiruri de caractere. Exemplu: pentru şirurile marina şi balena se va afişa na.
#include <stdio.h>
#include <string.h>
void cel_mai_lung_sufix(char v1[], char v2[]) {
    int length1 = strlen(v1);
    int length2 = strlen(v2);
    int contor = 0;
    char suffix[100];
    while (v1[length1 - 1] == v2[length2 - 1]) {
        suffix[contor++] = v1[length1 - 1];
        length1--;
        length2--;
    }
    if(contor > 0){
        for (int i = contor-1; i >= 0; i--)
            printf("%c", suffix[i]);
    }
}
int main() {
    char string1[100], string2[100];
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);
    cel_mai_lung_sufix(string1, string2);
    return 0;
}

// Scrieţi un program care inversează un şir de caractere. Funcţia va primi doi parametri: primul parametru va fi şirul care va fi inversat, al doilea parametru va fi şirul obţinut prin inversare.
#include <stdio.h>
#include <string.h>
void inversul_sirului(char v1[], char v2[]) {
    int length = strlen(v1);
    int cnt = 0;
    for (int i = length-1; i >= 0; i--)
        v2[cnt++] = v1[i];
    for (int i = 0; i < length; i++)
        printf("%c", v2[i]);
}
int main() {
    char string1[255];
    scanf("%254[^\n]", string1);
    int length = strlen(string1);
    char string2[length];
    inversul_sirului(string1, string2);
    return 0;
}

// Scrieţi un program C care citeşte un şir de caractere şi îl transformă astfel: a) prima literă devine majusculă; b) prima literă de după fiecare spaţiu sau semn de punctuaţie devine majusculă, restul literelor devin minuscule. De exemplu, pentru şirul citit: "Limbajul C are functii, chiar si pentru caractere." se afişeaza: "Limbajul C Are Functii, Chiar Si Pentru Caractere."
#include <stdio.h>
#include <ctype.h>
void transforma_sirul(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (i == 0) string[i] = toupper(string[i]);
        if (isspace(string[i])) string[i + 1] = toupper(string[i + 1]);
        printf("%c", string[i]);
    }
}
int main() {
    char string[255];
    scanf("%254[^\n]", string);
    transforma_sirul(string);
    return 0;
}

//Scrieţi o funcţie recursivă pentru a inversa un şir de caractere introdus de la tastatură
#include <stdio.h>
void inversul_sirului(char string[]) {
    if (*string) {
        inversul_sirului(string + 1);
        printf("%c", *string);
    }
}
int main() {
    char string[255];
    scanf("%254[^\n]", string);
    inversul_sirului(string);
    return 0;
}
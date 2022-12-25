// Scrieți un program în C pentru a calcula suma tuturor elementelor vectorului
#include <stdio.h>
int main() {
    int n, suma = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        suma += arr[i];
    }
    printf("%d", suma);
    return 0;
}

// Scrieți un program în C pentru a stoca elemente într-un vector și afisati-l.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    return 0;
}

// Scrieți un program în C pentru a citi n numere de valori intr-un vector și afișați-l în ordine inversă.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = n - 1; i >= 0; i--)
        printf("%d  ", arr[i]);
    return 0;
}

// Scrieți un program în C pentru a număra un număr total de elemente duplicate dintr-un vector.
#include <stdio.h>
int main() {
    int n, duplicates = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (arr[i] == arr[j]) duplicates++;
    printf("Numarul total de elemente duplicate este: %d", duplicates);
    return 0;
}

// Scrieți un program în C pentru a afisa toate elementele unice dintr-un vector
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Elementele unice gasite in vector sunt:\n");
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j] && i != j) flag = 1;
        }
        if (!flag) printf("%d ", arr[i]);
    }
    return 0;
}
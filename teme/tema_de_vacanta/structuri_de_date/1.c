// 1. Scrieti o functie care citeste valori corespunzatoare campurilor structurii de mai sus. Functia va returna o variabila de tip Student. Prototip: Student citeste();
Student citeste() {
    Student x;
    printf("[*]      Introduceti specializarea: ");
    //getchar();
    scanf(" %29[^\n]", x.specializare);
    printf("[*]     Introduceti anul de studiu: ");
    scanf("%d", &x.an_studiu);
    printf("[*]              Introduceti grupa: ");
    scanf("%d", &x.grupa);
    printf("[*] Introduceti numele studentului: ");
    //getchar();
    scanf(" %29[^\n]", x.nume);
    printf("[*]              Introduceti media: ");
    scanf("%f", &x.medie);
    return x;
}

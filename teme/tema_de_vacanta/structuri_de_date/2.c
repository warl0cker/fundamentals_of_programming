// 2. Scrieti o functie care afiseaza valorile campurilor unei variabile de tip Student. Prototip: void print(Student x);
void print(Student x) {
    printf("[+] Datele studentului: %s\n  [-]  Specializarea: %s\n  [-] Anul de studiu: %d\n  [-]          Grupa: %d\n  [-]          Media: %f\n",
           x.nume, x.specializare, x.an_studiu, x.grupa, x.medie);
}

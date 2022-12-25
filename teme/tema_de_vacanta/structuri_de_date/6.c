// 6. Sortati vectorul de studenti crescator dupa medie.
Student temp;
for (int i = 0; i < n; ++i) {
	for (int j = i + 1; j < n; ++j) {
		if (vector[i].medie > vector[j].medie) {
			temp = vector[i];
			vector[i] = vector[j];
			vector[j] = temp;
		}
	}
}
printf("[*] Mediile in ordine crescatoare sunt:\n");
for (int i = 0; i < n; i++)
	print(vector[i]);
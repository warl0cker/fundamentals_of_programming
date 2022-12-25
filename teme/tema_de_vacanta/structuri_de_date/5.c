// 5. Afisati datele studentului/studentilor cu cea mai mare medie.
float max = vector[0].medie;
for (int i = 0; i < n; i++)
	if (max < vector[i].medie) max = vector[i].medie;
printf("[*] Studentii cu cea mai mare nota sunt:\n");
for (int i = 0; i < n; i++)
	if (vector[i].medie == max) print(vector[i]);

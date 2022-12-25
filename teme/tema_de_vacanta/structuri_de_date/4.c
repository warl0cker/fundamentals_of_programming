// 4. Afisati datele tuturor studentilor din anul 1.
for (int i = 0; i < n; i++)
	printf("[%d] Studentul %s, de la %s, este anul %d, in grupa %d, cu media %f\n", i,
		   vector[i].nume, vector[i].specializare, vector[i].an_studiu, vector[i].grupa, vector[i].medie);
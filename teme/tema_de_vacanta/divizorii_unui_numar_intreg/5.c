// 5. Calculati cel mai mare divizor comun a doua numere intregi. Prototip: int cmmdc(int a, int b);
int cmmdc(int a, int b){
	if (a == 0) return b;
    return cmmdc(b % a, a);
}
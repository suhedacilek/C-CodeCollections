#include <stdio.h>

void main9()
{
	int sayac, A, B, C=1;
	printf("A sayisini gir:");
	scanf("%d", &A);
	printf("B sayisini gir:");
	scanf("%d", &B);




	

	for(sayac = 1; sayac <= B; sayac++)
		C = C * A;
	
	printf("Sonuc = %d", C);
	getch();



}
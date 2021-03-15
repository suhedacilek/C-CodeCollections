#include <stdio.h>

void main8()
{
	int sayac=1, A, B, C=1;
	printf("A sayisini gir:");
	scanf("%d", &A);
	printf("B sayisini gir:");
	scanf("%d", &B);




	while(sayac <= B)
	{
		C = C * A;
		sayac++;
	}
	printf("Sonuc = %d", C);
	getch();



}
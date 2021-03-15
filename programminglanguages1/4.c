#include <stdio.h>
void main4()
{
	int sayi;
	printf("Sayi gir:");
	scanf("%d", &sayi);



	if(sayi>0)
		printf("Sayi sifirdan buyuk...");
	else if(sayi<0)
		printf("Sayi sifirdan kucuk...");
	else
		printf("Sayi sifirdir...");
	
	getch();
}
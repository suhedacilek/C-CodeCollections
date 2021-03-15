#include <stdio.h>
void main3()
{
	int toplam = 0, sayi;
	printf("Sayi gir:");
	scanf("%d", &sayi);

	while(sayi % 2 == 1)
	{
		toplam += sayi;
		printf("Sayi gir:");
		scanf("%d", &sayi);
	}
	printf("Toplam = %d", toplam);
	getch();
}
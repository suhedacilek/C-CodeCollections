#include <stdio.h>

void main9_5()
{
	int min, max, sayi;
	printf("Sayi gir:");
	scanf("%d", &sayi);
	min = sayi;
	max = sayi;

	while(sayi != -1)
	{
		if(sayi>max)
			max = sayi;
		else if(sayi<min)
			min = sayi;
		printf("Sayi gir:");
		scanf("%d", &sayi);
	}
	printf("Max = %d\n", max);
	printf("Min = %d\n", min);
	getch();
}
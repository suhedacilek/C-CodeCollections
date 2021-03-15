#include <stdio.h>
void main10_6()
{
	int boykilo[2][10];
	int i, j, boyToplam = 0, kiloToplam = 0;
	float boyOrt, kiloOrt;
	for(i=0;i<2;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==0)			
				printf("%d. kilo gir:", j+1);
			else
				printf("%d. boy gir:", j+1);

			scanf("%d", &boykilo[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==0)
				kiloToplam += boykilo[i][j];
			else
				boyToplam += boykilo[i][j];
		}
	}

	kiloOrt = (float)kiloToplam / 10;
	boyOrt = (float)boyToplam / 10;
	printf("Kilo ortalamasi : %.2f\n", kiloOrt);
	printf("Boy ortalamasi : %.2f\n", boyOrt);
	getch();
}

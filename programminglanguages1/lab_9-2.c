#include <stdio.h>

void main2()
{
	int r, secim;
	float alan, cevre;
	printf("Yaricap gir:");
	scanf("%d", &r);
	printf("1-Alan\n2-Cevre\nSecim yap:");
	scanf("%d", &secim);
	if(secim == 1)
	{
		alan = 3.14*r*r;
		printf("Alan = %.2f", alan);
	}
	else if(secim == 2)
	{
		cevre = 2*3.14*r;
		printf("Cevre = %.2f", cevre);
	}
	else
		printf("Yanlis secim...");
	
	getch();
}
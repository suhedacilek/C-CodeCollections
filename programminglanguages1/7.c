#include <stdio.h>

void main7()
{
	int not, toplam = 0;
	printf("Hele Not gir:");
	scanf("%d", &not);



	while(not != -1)
	{
		toplam += not;
		printf("Not gir:");
		scanf("%d", &not);
	}
	printf("Toplam not: %d", toplam);
	getch();
}
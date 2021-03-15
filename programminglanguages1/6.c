#include <stdio.h>
void main6()
{
	int not;
	printf("Not gir:");
	scanf("%d", &not);



	switch(not)
	{
		case 1: printf("Kaldi...");
		case 2: printf("Gecer...");
		case 3: printf("Orta...");break;
		case 4: printf("Iyi...");
		case 5: printf("Pekiyi...");
		default: printf("Yanlis giris yaptiniz...");
	}
	getch();
}
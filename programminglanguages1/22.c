#include <stdio.h>

void main22()
{
	int i=0, sayac = 0;
	char giris[100];
	printf("Bir metin gir:");
	gets(giris);

	while(giris[i] != '\0')
	{
		if(giris[i] == 'a' && giris[i+1] == 'k')
			sayac++;
		i++;
	}
	printf("Girilen metinde %d adet ak oruntusu vardir...", sayac);
	getch();
}
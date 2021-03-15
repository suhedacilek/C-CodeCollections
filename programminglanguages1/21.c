#include <stdio.h>

void main21()
{
	int i=0, j=0, sayac=0;
	char giris[100];
	char rakam[] = "0123456789";
	printf("Bir metin gir:");
	gets(giris);

	while(giris[i] != '\0')
	{
		j=0;
		while(rakam[j] != '\0')
		{
			if(giris[i] == rakam[j])
				sayac++;
			j++;
		}
		i++;
	}
	printf("Girilen metinde %d adet rakam vardir...", sayac);
	getch();
}
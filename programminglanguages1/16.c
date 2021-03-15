#include <stdio.h>

void main16()
{
	int i=0;
	char giris[100];
	printf("Bir metin gir:");
	gets(giris);



	while(giris[i] != '\0')
	{
		i++;
	}
	printf("Girilen metnin uzunlugu %d dir", i);
	getch();
}
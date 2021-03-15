#include <stdio.h>

void main11_3_yol_1()
{
	int i=0, j;
	char giris[100];
	char kucuk[] = "abcdefghijklmnopqrstuvwxyz";
	char buyuk[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("Bir metin gir:");
	gets(giris);

	for(i=0;giris[i] != '\0'; i++)
	{
		j = 0;
		while(kucuk[j] !='\0')
		{
			if(giris[i] == kucuk[j])
				giris[i] = buyuk[j];
			else if(giris[i] == buyuk[j])
				giris[i] = kucuk[j];
			j++;
		}
	}
	puts(giris);
	getch();
}
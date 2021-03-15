#include <stdio.h>
void main20()
{
	int i=0;
	char giris[100], c;
	printf("Bir metin gir:");
	gets(giris);

	while(giris[i] != '\0')
	{
		if(giris[i]>=65 && giris[i] <=90) // buyuk harf
		{
			giris[i] += 32;
		}
		else if(giris[i]>=97 && giris[i]<=122) //kucuk harf
		{
			giris[i] -= 32;
		}
		i++;
	}
	puts(giris);
	getch();
}
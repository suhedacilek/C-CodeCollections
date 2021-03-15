#include <stdio.h>

void main23()
{
	int i=0;
	char giris[100];
	printf("Bir metin gir:");
	gets(giris);

	printf("%c\n",giris[0]);
	while(giris[i] != '\0')
	{
		if(giris[i] == ' ')
			printf("%c\n", giris[i+1]);
		i++;
	}
	getch();
}
#include <stdio.h>
void main11_2()
{
	int i=0;
	char giris[100], c;
	printf("Bir metin gir:");
	gets(giris);

	
	while(giris[i] != '\0')
	{
		if(giris[i] == 'a')
			giris[i] = 'A';
		i++;
	}
	puts(giris);
	getch();
}
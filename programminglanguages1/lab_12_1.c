#include <stdio.h>
int tersCevir(int a)
{
	int basamak, toplam =0;
	while(a>0)
	{
		basamak = a%10;
		a = a/10;
		toplam = toplam*10+basamak;
	}
	return toplam;
}

void main12_1()
{
	int sayi;
	printf("Sayi gir:");
	scanf("%d", &sayi);
	printf("Sonuc = %d", tersCevir(sayi));
	getch();
}
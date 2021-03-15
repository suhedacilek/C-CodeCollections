#include <stdio.h>
int topla1 (int a, int b)
{
	return a+b;
}




int cikar(int x, int y)
{
	return x-y;
}

int carp(int a, int b)
{
	return a*b;
}

double bol(int a, int b)
{
	return a/b;
}

void main24()
{


	int secim, sayi1, sayi2;	
	printf("1. sayiyi gir:");
	scanf("%d", &sayi1);
	printf("2. sayiyi gir:");
	scanf("%d", &sayi2);
	printf("1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\nSecim yap:");
	scanf("%d", &secim);
	switch(secim)
	{
		case 1: printf("Sonuc = %d", topla1(sayi1, sayi2));break;
		case 2: printf("Sonuc = %d", cikar(sayi1, sayi2));break;
		case 3: printf("Sonuc = %d", carp(sayi1, sayi2));break;
		case 4: printf("Sonuc = %.2f", bol(sayi1, sayi2));break;
		default: printf("Yanlis secim yaptiniz..."); break;
	}
	getch();
}
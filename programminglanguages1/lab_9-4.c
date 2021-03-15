#include <stdio.h>
void main4()
{
	int sayac, basamak, sayi, toplam;
	for(sayac = 100; sayac <=999; sayac++)
	{
		sayi = sayac;
		toplam = 0;
		while(sayi>0)
		{
			basamak = sayi %10;
			sayi = sayi / 10;
			toplam += basamak*basamak*basamak;
		}
		if(toplam == sayac)
			printf("%d\n", sayac);
	}
	getch();
}
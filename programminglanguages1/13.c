#include <stdio.h>
#define boyut 100
void main13()
{
	int notlar[boyut];
	float toplam = 0, ort, min,max;
	int i,minIndis=0, maxIndis=0;




	for(i=0;i<boyut;i++)
	{
		printf("%d. notu gir:", i+1);
		scanf("%d", &notlar[i]);
	}

	min = notlar[0];
	max = notlar[0];
	for(i=1;i<boyut;i++)
	{
		if(notlar[i] > max)
		{
			max = notlar[i];
			maxIndis = i;
		}
		else if(notlar[i] < min)
		{
			min = notlar[i];
			minIndis = i;
		}
	}

	for(i=0;i<boyut;i++)
	{
		toplam += notlar[i];
		printf("notlar[%d] ==> %d\n", i, notlar[i]);

	}
	ort = (float)toplam / 5;
	printf("Ortalama : %.2f\n", ort);
	printf("Max not : %.2f\n", max);
	printf("Max not indis : %d\n", maxIndis);
	printf("Min not : %.2f\n", min);
	printf("Min not indis : %d\n", minIndis);
	getch();
}
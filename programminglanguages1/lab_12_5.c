#include <stdio.h>

void enBuyukEnKucukBul(int A[], int N)
{
	int eb = A[0], ek = A[0], ekIndis=0, ebIndis=0, i;
	for(i=0;i<N;i++)
	{
		if(A[i] > eb)
		{
			eb = A[i];
			ebIndis = i;
		}
		else if(A[i] < ek)
		{
			ek = A[i];
			ekIndis = i;
		}
	}
	printf("En buyuk sayi : %d Indis : %d\n", eb, ebIndis);
	printf("En kucuk sayi : %d Indis : %d\n", ek, ekIndis);
}

void main12_5()
{
	int dizi[5], i;
	for(i=0;i<5;i++)
	{
		printf("%d. sayiyi gir:", i+1);
		scanf("%d", &dizi[i]);
	}

	enBuyukEnKucukBul(dizi, 5);
	getch();
}
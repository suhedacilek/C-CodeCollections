#include <stdio.h>
#include <math.h>
double ortalamaHesapla(int A[], int N, int secim)
{
	double ao=0, go = 1, ho = 0;
	int i;
	for(i=0;i<N;i++)
	{
		ao += A[i];
		go *= A[i];
		ho += 1.0/A[i];
	}
	ao = ao/N;
	go = pow(go, 1.0/N);
	ho = N/ho;
	if(secim == 1)
		return ao;
	else if(secim == 2)
		return go;
	else if(secim == 3)
		return ho;
	else
		return -1;
}

void main12_4()
{
	int dizi[] = {10,20,30};
	int s;
	double sonuc;
	printf("1-Artimetik ORtalama\n2-Geometrik ORtalama\n3-Harmonik Ortalama\nOrtalama tipini sec:");
	scanf("%d", &s);
	sonuc = ortalamaHesapla(dizi, 3, s);
	printf("Sonuc = %.2f", sonuc);
	getch();
}
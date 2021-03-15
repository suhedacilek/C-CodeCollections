#include <stdio.h>
#define N 2
#define M 5
void main14()
{
	int notlar[N][M];
	int i, j;

	for(j=0;j<M;j++)
	{
		for(i=0;i<N;i++)
		{
			if(i==0)
				printf("%d. vize notu gir:", j+1);
			else
				printf("%d. final notu gir:", j+1);
			scanf("%d", &notlar[i][j]);
		}
	}
	/*for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(i==0)
				printf("%d. vize notu gir:", j+1);
			else
				printf("%d. final notu gir:", j+1);
			scanf("%d", &notlar[i][j]);
		}
	}*/

	for(i=0;i<N;i++)
	{
		if(i == 0)
			printf("Vize notlari ==>");
		else 
			printf("Final notlarý ==>");
		for(j=0;j<M;j++)
		{			
			printf("%5d", notlar[i][j]);
		}
		printf("\n");
	}
	getch();
}
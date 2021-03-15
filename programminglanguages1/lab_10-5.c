#include <stdio.h>
#define N 2
#define M 3
void main10_5()
{
	int A[M][N], B[N][M], C[M][M];
	int i, j, k, sum=0;
	//A Matrisine veri gir
	for(i = 0;i<M; i++)
	{
		for(j=0;j<N;j++)
		{
			printf("A[%d][%d]:", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	//B Matrisine veri gir
	for(i=0;i<N; i++)
	{
		for(j=0;j<M;j++)
		{
			printf("B[%d][%d]:", i, j);
			scanf("%d", &B[i][j]);
		}
	}

	//Matris çarpımını hesapla
	for(i=0;i<M;i++)
	{
		for(j=0;j<M;j++)
		{
			for(k=0;k<N;k++)
			{
				sum += A[i][k] * B[k][j];
			}
			C[i][j] = sum;
			sum = 0;
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	getch();
}
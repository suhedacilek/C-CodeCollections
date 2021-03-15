#include <stdio.h>
#define M 2
#define N 3

void main10__5()
{
	int A[M][N], B[N][M], C[M][M];
	int i, j, k;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("A[%d][%d]:", i,j);
			scanf("%d", &A[i][j]);
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("B[%d][%d]:", i,j);
			scanf("%d", &B[i][j]);
		}
	}
	
}
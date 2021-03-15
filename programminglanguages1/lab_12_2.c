#include <stdio.h>
#define N 3
void terstenDizi(int A[], int yeni[])
{
	int i, j=0;
	for(i=N-1;i>=0;i--)
	{
		yeni[j] = A[i];
		j++;
	}
}

void main12_2()
{
	int i;
	int B[] = {5,10,15};
	int C[3];
	terstenDizi(B, C);
	for(i=0;i<N;i++)
		printf("%d\t", C[i]);
	getch();
}


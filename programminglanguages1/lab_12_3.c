#include <stdio.h>

void diziTopla(int A[], int B[], int C[], int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		C[i] = A[i] + B[i];
	}
}

void main12_3()
{
	int i;
	int x[] = {10,20,30};
	int y[] = {1,2,3};
	int z[3];

	diziTopla(x, y, z, 3);

	for(i=0;i<3;i++)
		printf("%d\t", z[i]);
	getch();
}
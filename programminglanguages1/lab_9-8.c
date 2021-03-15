#include <stdio.h>
void main9_8()
{
	int i;
	for(i=0;i<256;i++)
	{




		if(i%10==0)
			printf("\n");
		printf("%3c==>%3d", i,i);
	}
	getch();
}
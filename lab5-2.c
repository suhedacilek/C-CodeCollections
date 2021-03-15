#include <stdio.h>


int main(){
	
	int array[]={1,2,3,4,5};
	int *p;
	int i;
	
	p= &array;

	for(i=0; i<5; i++){
		printf("%d\t", *(p+i));
	}
	printf("\n\n");
	for(i=4; i>=0; i--){
		printf("%d\t", *(p+i));
	}
}


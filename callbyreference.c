#include <stdio.h>
void increment(int *);
int main(){
	
	int i = 5;
	printf("Oncesi : %d \n", i);
	increment(&i);
	printf("Sonrasi : %d \n", i);
	
	getchar();
	return 0;
}

void increment(int *k){
	(*k)++;
}


//OUTPUT : 5 ve 6

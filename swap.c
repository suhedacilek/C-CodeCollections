#include <stdio.h>

void swap(int *p, int*q){
	int temp = *q;
	*q = *p;
	*p = temp;
}

int main(){
	int a=10, b=5, c=7, d=3;
	printf("a:%d b:%d c:%d d:%d \n", a, b , c ,d);
	swap(&a,&b);
	swap(&c,&d);
	printf("a:%d b:%d c:%d d:%d \n", a, b , c ,d);
}

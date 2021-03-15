#include <stdio.h>

long fact(int n){
	
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}

int main(){
	int number, factorial;
	printf("Put your number that you want to find of factorial:");
	scanf("%d", &number);
	factorial = fact(number);
	printf("\nYour result is %d! = %d",number, factorial);
}

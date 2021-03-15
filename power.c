#include <stdio.h>

int pow(int number,int power){
	int result = 1;
	int i;
	
	if(power == 0){
		return 1;
	}
	else{
		for(i=1; i<=power ; i++){
			result *= number;
		}
	return result;
	}	
}

int main(){
	int n , p;
	printf("Put your number that you find power\n");
	scanf("%d", &n);
	printf("Put your power that you find number\n");
	scanf("%d", &p);
	
	pow(n,p);
	printf("Your result is : %d ", pow(n,p));
}

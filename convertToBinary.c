//Convert to binary

#include <stdio.h>
#include <conio.h>

void convertToBinary(unsigned);

int main(){
	unsigned number;
	printf("Enter number: \n");
	scanf("%u", &number);
	convertToBinary(number);
	
	getch();
}

void convertToBinary(unsigned x){
	
	int i=0, k;
	unsigned *p;
	p = &x;
	
	while(1){
		*(p+i) = x % 2;
		x = x / 2;
		
		if(x == 1){
			*(p+i+1) = x;
			break;
		}
		i++;
		
	}
	for(k=i+1; k>0; k--){
		printf("u", *(p+k));
	}
}

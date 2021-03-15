#include <stdio.h>
#define PI 3.14

float square(float r){
	
	return PI*r*r;
		
}
int main(){
	float yaricap;
	printf("Dairenin yaricapini giriniz: ");
	scanf("%f", &yaricap);
	float daire = square(yaricap);
	printf("\nDairenin alani: %.2f", daire);
	
}


#include <stdio.h>

float kitleIndeks(float kg, float cm){
	
	float sonuc=0;
	
	sonuc = (kg / (cm*cm));
	
	if(sonuc<=18){
		printf("Zayif..\n");
		return 1;
	}
	
	else if(sonuc <= 25 && sonuc >= 19){
		printf("Normal..\n");
		return 2;
	}
	else if(sonuc <= 30 && sonuc >=26){
		printf("Kilolu.. \n");
		return 3;
	}
	else{
		printf("Obez..\n");
		return 4;
	}
}

int main(){
	float kilo , boy;
	
	printf("Lütfen önce kilonuzu ve sonra boyunuzu m cinsinden giriniz: ");
	scanf("%f %f", &kilo , &boy);
	
	float kitleIndex = kitleIndeks(kilo,boy);
	printf("Kilonuz : %.2f Boyunuz: %.2f Kitle Indeksiniz: %.2f", kilo,boy,kitleIndex);	
}













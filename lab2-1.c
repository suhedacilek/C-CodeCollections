#include <stdio.h>
#include <time.h>

int rastgeleSiralamaOlustur(int dizi[], int x){
	
	int i , okulno;
	
	printf("Sunum yapacak ogrencilerin okul numaralarini giriniz:\n");
	
	for(i=0; i<x; i++){
		scanf("%d",&okulno);
		dizi[i] = okulno;
	}
	srand(time(0));
	for(i=0;i<x;i++){
		int temp = dizi[i];
    	int randomIndex = rand()% x; //0'dan 2'ye kadar olan sayýlar. - (rand() % (hi_num-low_num)) + low_num;

    	dizi[i] = dizi[randomIndex];
    	dizi[randomIndex] = temp;
	}
	for(i=0;i<x;i++){
		printf("\n%d numarali sira : %d\n",i+1,dizi[i]);
	}
}

int main(){

	int dizi[20];
	int n;
	
	printf("Kac tane ogrenci sunum yapacak ? \n");
	scanf("%d", &n);
	
	rastgeleSiralamaOlustur(dizi,n);
}

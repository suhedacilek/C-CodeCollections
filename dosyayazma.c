#include <stdio.h>

int main(){
	char name[40];
	int hesapNo;
	double bakiye;
	
	FILE *myPtr;
	
	if((myPtr=fopen("musteri.dat","w"))==NULL)
		printf("Dosya acilamadi \n");	
	else{
		printf("Hesap no , bakiye ve isminizi giriniz:\n");
		printf("Veri girisini bitirmek icin EOF girin");
		scanf("%d%lf%s",&hesapNo,&bakiye,name);
		
		while(!feof(stdin)){
			fprintf(myPtr,"%d %.2f %s",hesapNo,bakiye,name);
			scanf("%d %.2f %s",&hesapNo,&bakiye,name);
		}
		fclose(myPtr);
	}
	return 0;
}	



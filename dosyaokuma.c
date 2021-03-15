#include <stdio.h>

int main(){
	
	int hesapno;
	char ad[30];
	double bakiye;
	FILE *myPtr;
	if((myPtr = fopen("musteri.dat","r")) == NULL)
		printf("Dosya acilmadi \n");
	else{
		printf("%-10s%-13s%s\n","Hesap No","Ad","Bakiye");
		fscanf(myPtr,"%d%s%lf",&hesapno,ad,&bakiye);
		
		while(!feof(myPtr)){
			printf(myPtr, "%-10d%s-13s%7.2f \n",hesapno,ad,bakiye);
			fscanf(myPtr,"%d%s%lf",&hesapno,ad,&bakiye);
		}
		
		fclose(myPtr);
	}
	return 0;
}

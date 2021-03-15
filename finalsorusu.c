#include <stdio.h>

struct student{
	int number;
	char name[30];
	float grade;
};

int main(){
	FILE *fptr;
	int i = 1;
	struct student notlar;
	if((fptr=fopen("ogrenci.dat","a+"))==NULL)
		printf("Dosya acilamadi..");
	else{
		fread(&notlar,sizeof(struct student),1,fptr);
		while(!feof(fptr)){
			if(notlar.grade>=55 && notlar.grade<=59){
				
				notlar.grade += 5;
					
				fseek(fptr,(i-1)*sizeof(struct student),SEEK_SET);
				fwrite(&notlar,sizeof(struct student),1,fptr);
			}
			i++;
			
			fseek(fptr,(i-1)*sizeof(struct student),SEEK_SET);
			fread(&notlar,sizeof(struct student),1,fptr);
		}
		printf("Hesaplar güncellendi..");	
	}
}


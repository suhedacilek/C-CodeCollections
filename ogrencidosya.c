#include <stdio.h>
#include<stdlib.h>
struct student{
	int id;
	char name[30];
	char surname[30];
	float grade;
};

typedef struct student student;
int secimGir(void);
void listele(FILE *);
void bilgiGir(FILE *);
void createFile(FILE *);
void oku(FILE *);

int main(){
	
	student info ={ 0,"","",0.0};
	FILE *ptr;
	int secim;
	
	if((ptr = fopen("grades.dat","r+")) == NULL){
		printf("Dosya acilamadi!");
	}
	else{
		while((secim = secimGir())!= 5){
			switch(secim){
				case1 : createFile(ptr);break;
				case2 : bilgiGir(ptr);break;
				case3 : listele(ptr);break;
				case4 : oku(ptr);break;
			}
		}
		
		/*
			
			//printf("Veri girisini bitirmek icin 0 gir\n");
			//printf("Ogrenci bilgi gir\n");
			//scanf("%d",&info.id);
			
			for(i=0;i<5;i++){
			
			//while(info.id != 0){
				
				
				
				printf("Enter id, name, surname, grade with in order\n");
				fscanf(stdin,"%d",&info.id);
				fscanf(stdin,"%s,",&info.name);
				fscanf(stdin,"%s",&info.surname);
				fscanf(stdin,"%f",&info.grade);
				
				fseek(ptr,(info.id-1)*sizeof(student),SEEK_SET);
				
				fwrite(&info,sizeof(student),1,ptr);
				
				//printf("Veri girisini bitirmek icin 0 gir\n");
				//printf("id gir\n");
				//scanf("%d",&info.id);
			}*/
			fclose(ptr);
	}
	return 0;
	
}
void createFile(FILE *ptr){
	student info ={ 0,"","",0.0};
	int i;
	for(i=0;i<50;i++){
		fwrite(&info,sizeof(student),1,ptr);
	}
	
}
void bilgiGir(FILE *ptr){
	student info ={ 0,"","",0.0};
	int i;
	for(i=0;i<5;i++){
			
			//while(info.id != 0){
				
				
				
				printf("Enter id, name, surname, grade with in order\n");
				fscanf(stdin,"%d",&info.id);
				fscanf(stdin,"%s,",&info.name);
				fscanf(stdin,"%s",&info.surname);
				fscanf(stdin,"%f",&info.grade);
				
				fseek(ptr,(info.id-1)*sizeof(student),SEEK_SET);
				
				fwrite(&info,sizeof(student),1,ptr);
				
				//printf("Veri girisini bitirmek icin 0 gir\n");
				//printf("id gir\n");
				//scanf("%d",&info.id);
			}
}
void listele(FILE *ptr){
	student info = {0,"","",0.0};
	while(!feof(ptr)){
		fread(&info.id,sizeof(student),1,ptr);
		if(info.id =! 0){
			printf("%d,%s,%s,%f",info.id,info.name,info.surname,info.grade);
		}
		fclose(ptr);
		getchar();
	}
}
int secimGir(){
	int menuSecim;
	printf("Secim yapin\n1.Dosya oluþtur\n2.Bilgi Gir\n3.Listele\n4.Oku\n5.Cikis\n");
	scanf("%d",&menuSecim);
	return menuSecim;
}

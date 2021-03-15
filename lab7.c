#include <stdio.h>
#include <stdlib.h>

struct student{
	int number;
	char name[40];
	char surname[40];
	float finalGrade, midtermGrade;
	struct student *next;
};

typedef struct student node;

node *createList(){
	
	int i;

	node *ptr = (node*)malloc(5*sizeof(node));

	printf("Ogrencilerin bilgilerini giriniz:");

	for(i=0; i<5;i++){
		
	/*	if(i == 0){
				
				head = (node*)malloc(sizeof(node));
				ptr = head;	
			}
			
			else{
				
				ptr -> next = (node*)malloc(sizeof(node));
				ptr = ptr -> next;
				
			}
			*/
			printf("Enter %d. student name - surname : %s - %s \n", i+1, (ptr+i)->name, (ptr+i)->surname); 
			scanf("%s%s", (ptr+i)->name,(ptr+i)->surname);
			printf("Enter %d. student number: %d \n", i+1, (ptr+i)->number); 
			scanf("%d", (ptr+i)->number);
			printf("Enter %d. student midtermGrade - finalGrade : %f - %f \n", i+1,(ptr+i)->midtermGrade,(ptr+i)->finalGrade); 
			scanf("%f%f",(ptr+i)->midtermGrade,(ptr+i)->finalGrade);
		}
	
	/*ptr -> next = NULL;*/
}

int main(){
	int enter;
	printf("Ogrenci dizisini oluturunuz:\n");
		createList();
	}
	
	

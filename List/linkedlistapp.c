#include <stdio.h>
#include <stdlib.h>

struct student{
	
	int no;
	int age;
	char name[40];
	struct student *next;
};

typedef struct student node;


node *head , *p;

	node *createList()
{
	int n, k;
	node *head , *p;
	
	printf("Enter data number in the list ");
	scanf("%d" , &n);
	
	for(k=0; k<n; k++){
		
		if(k == 0){
			
			head = (node*)malloc(sizeof(node));
			p= head;	
		}
		
		else{
			
			p -> next = (node*)malloc(sizeof(node));
			p = p -> next;
			
		}
		printf("Enter %d. student number : \n", k+1); scanf("%d", &p -> no);
		printf("Enter %d. student age: \n", k+1); scanf("%d", &p -> age);
		printf("Enter %d. student name : \n", k+1); scanf("%s", p -> name);
	}

	p -> next = NULL;
}

void traverseList(node *head){
	int counter=1;
	node *p;
	p = head;
	
	if(p!=NULL){
		printf("%d - %s %d %d ", counter, p->name, p->no, p->age);
		p= p->next;
		counter++;
	}	
}
	
node *addNode(node *head){
	
	int stdNo;
	node *p, *q;
	
	node *newNode = (node*)malloc(sizeof(node));
	
	printf("Enter new student number : \n"); scanf("%d", &newNode -> no);
	printf("Enter new student age : \n"); scanf("%d", &newNode -> age);
	printf("Enter new student name : \n"); scanf("%s", newNode -> name);
	
	printf("Enter the student number that new node will be added before");
	scanf("%d", &stdNo);
	
	p = head;
	
	if(p->no == stdNo){
		newNode -> next = p;
		newNode = head;	
	}
	else{
		while(p->no != stdNo && p -> next != NULL){ //iki deger arasindaki konumu buluyoruz.
			q = p;
			p = p->next;
		}
		if(p -> no == stdNo){                       //araya ekleme
			q -> next = newNode;
			newNode -> next = p;
		}
		else if(p->next == NULL){                   //sona ekleme
			p->next = newNode;
			newNode -> next = NULL;
		}
	}
	return head;

}

node *deleteNode(node *head){
	
	int stdNo;
	node *p , *q;
	
	printf("Enter student number will be deleted? \n");
	scanf("%d", &stdNo);
	
	p = head;
	
	if(p -> no == stdNo){
		
		head = p->next;
		free(p);
		
	}
	else{
		while(p->next != NULL && p->no != stdNo){
			q = p;
			p = p -> next;
		}
		if(p->no == stdNo){
			q -> next = p -> next;
			free(p);
		}
		else if(p -> next == NULL){
			printf("No node found to delete");
		}
		
	}
	
	return head;
}

int main(void){
	
	node *head;
	int selection=0;
	
	printf("1.Create Node \t 2.Traverse List \t 3.Add Node \t 4.Delete Node \t 5.Exit \n");
	
	while(1){
		
		printf("Selection [1-5]");
		scanf("%d", &selection);
		
		switch(selection){
			case 1: head = createList(); printf("Adres: %x \n", head);
					traverseList(head); break;
					
			case 2: traverseList(head); break;
			
			case 3: head = addNode(head);
			
					traverseList(head); break;
			case 4: head = deleteNode(head); 
			
					traverseList(head); break;
					
			case 5: exit(0);
			
		}
	}
	
}

	
	
	

























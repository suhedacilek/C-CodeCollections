/*3.(In a linear linked list, write a function that deletes the element in the middle of the list (free this
memory location) (if the list has 100 or 101 elements, it will delete the 50th element). The function will
take a list as a parameter and return the updated list.)*/

#include<stdio.h>
#include<stdlib.h>

struct node {
	int number;
	struct node *next;
};

typedef struct node node;
node *head=NULL;
node *temp;
node *q;

node* createList(int x){
	if(head==NULL){
		head = (node*) malloc(sizeof(node));
		temp = head;
	}
	else{
		temp->next = (node*) malloc (sizeof(node));
		temp = temp ->next;
	}
	temp->number = x;
	temp->next = NULL;
	
	return head;
}

node *deleteMiddle(){ 
    node *q = head; 
    node *p = head; 
  
    if (head!=NULL){ 
        while (p != NULL && p->next != NULL) 
        {
            p = p -> next -> next;
            temp = q;
            q = q -> next; 
        } 
        printf("The middle element is [%d]\n\n", q->number); 
    }
    
    temp -> next = temp -> next -> next;
    free(q);
    
    return head;
}

node *printList(){
	
	temp = head;
	while(temp != NULL){
		printf("%d--",temp->number);
		temp = temp->next;
	}
}

int main(){
	
	int enter,n,i;

	while(1){
		
		printf("Enter a number you want to add\n");
		scanf("%d",&enter);
		
		if(enter == -1){
			
			printf("List before delete\n");
			printList();
		
			deleteMiddle();
			printf("\n\nList after delete\n");
			printList();
			
			break;
		}
		else{

			createList(enter);
		}
	}
}

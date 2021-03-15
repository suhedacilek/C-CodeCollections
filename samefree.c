#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

typedef struct node node;

void removeDuplicates(node *head){
	node *current = head;
	node *sonraki;
	
	if(current==NULL)
		printf("Empty..");
	
	while(current->next != NULL){
		if(current->data == current->next->data){
			sonraki = current->next->next;
			free(current->next);
			current->next = sonraki;
		}
		else{
			current = current->next;
		}
		
	}
}
void push(node** head_ref, int new_data) 
{ 
	/* allocate node */
	node* new_node = 
			(node*) malloc(sizeof(node)); 
			
	/* put in the data */
	new_node->data = new_data; 
				
	/* link the old list off the new node */
	new_node->next = (*head_ref);	 
		
	/* move the head to point to the new node */
	(*head_ref) = new_node; 
} 

/* Function to print nodes in a given linked list */
void printList(node *x) 
{ 
	while (x!=NULL) 
	{ 
	printf("%d ", x->data); 
	x = x->next; 
	} 
} 

/* Drier program to test above functions*/
int main() 
{ 
	/* Start with the empty list */
	node* head = NULL; 
	
	/* Let us create a sorted linked list to test the functions 
	Created linked list will be 11->11->11->13->13->20 */
	push(&head, 20); 
	push(&head, 13); 
	push(&head, 13); 
	push(&head, 11); 
	push(&head, 11); 
	push(&head, 11);									 

	printf("\n Linked list before duplicate removal "); 
	printList(head); 

	/* Remove duplicates from linked list */
	removeDuplicates(head); 

	printf("\n Linked list after duplicate removal ");		 
	printList(head);			 
	
	return 0; 
}


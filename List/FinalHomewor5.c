/* 5.A singly linear list stores integer values in each node and has multiple nodes. Write a function using given
prototype below. This function cuts the first node of the list and adds it to the end as last node. It takes
beginning address of the list as a parameter and returns the updated list. */


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

node *printList(){
	temp = head;
	while(temp != NULL){
		printf("%d--",temp->number);
		temp = temp->next;
	}
}

node* cutheadaddlast(){
	node *last = head;
	q = head;
	
	while(last -> next != NULL){ 
        last = last->next; 
	}
	head = q -> next;
	q -> next = NULL;
	last->next = q; 
	
	return head;
}

int main(){
	int enter,n,i;
	
	
	while(1){
		printf("Enter a number you want to add\n");
		scanf("%d",&enter);
		if(enter == -1){
			cutheadaddlast();
			printList();
			break;
		}
		else{
			createList(enter);
		}
	}
}

/* 2.A singly linear list stores integer values in each node and has multiple nodes. Write a function using given
prototype below. This function cuts the last node of the list and adds it to the beginning as first node. It
takes beginning address of the list as a parameter and returns the updated list.*/

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

node* cutlastaddhead(){
	node *last = head;
	node *secLast = head;
	
	while(last->next != NULL){
		secLast = last; 
        last = last->next; 
	}
	secLast -> next = NULL; 
	last ->next = head; 
	head = last;
	
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
			cutlastaddhead();
			printList();
			break;
		}
		else{
			createList(enter);
		}
	}
}

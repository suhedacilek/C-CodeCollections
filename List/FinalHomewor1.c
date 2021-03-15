/*1.Adding the odd numbers to the beginning of the list and even numbers to the end of the list until -1 is
entered from keyboard. */

#include<stdio.h>
#include<stdlib.h>

struct node {
int number;
struct node * next;
};

typedef struct node node;
node *head;
node *temp;

node *createNode(){
	node* newNode = (node*)malloc(sizeof(node));
	head = newNode;
	head->next = NULL;
    return head;
}

node *addFirst(int x){
    node* element = (node*)malloc(sizeof(node));
	element->number = x;
    element->next = head;
    head = element;
}
node *addLast(int x){
	temp = head;
	while(temp -> next != NULL){
		temp = temp -> next;
	}
	
	node *element = (node*) malloc (sizeof(node));
	temp -> next = element;
	element -> number = x;
	element -> next = NULL;
	
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
	int enter;
	while(1){
		printf("Enter a number you want to add\n");
		scanf("%d",&enter);
		if(enter == -1){
			printList();
			break;
		}
		else if(enter % 2 == 0){
			addLast(enter);
		}
		else{
			addFirst(enter);
		}
	}
}


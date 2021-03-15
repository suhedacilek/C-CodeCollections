/*Write a function that takes two parameters head (list name) and age (given student age). The function
deletes node (free this memory location) by finding the second node with the given age value in the list.
Write the required function using the prototype given below.*/

#include<stdio.h>
#include<stdlib.h>

struct node {
	int age;
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
	temp->age = x;
	temp->next = NULL;
	
	return head;
}
node* duplicateDelete(){
	node *p, *prev;
	temp = p = q = prev = head;
	q = q->next;
    while(p != NULL){
        while (q != NULL && q->age != p->age){
            prev = q;
            q = q->next;
        }
        if (q == NULL){
            p = p->next;
            if (p != NULL){
                q = p->next;
            }
        }
        else if (q->age == p->age){
            prev->next = q->next;
            temp = q;
            q = q->next;
            free(temp);
        }
    }
}

node *printList(){
	temp = head;
	while(temp != NULL){
		printf("%d--",temp->age);
		temp = temp->next;
	}
}
int main(){
	int enter,n,i;
	
	
	while(1){
		printf("Enter a number you want to add\n");
		scanf("%d",&enter);
		if(enter == -1){
			duplicateDelete();
			printList();
			break;
		}
		else{
			createList(enter);
		}
	}
}

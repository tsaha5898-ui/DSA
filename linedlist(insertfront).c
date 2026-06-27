#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insert(){
struct	Node *n,*t;
	n=(struct Node*)malloc(sizeof(struct Node*));
	printf("Enter the data: ");
	scanf("%d",&n->data);
	n->next=NULL;
	if(head==NULL){
		head=n;
	}
	else{
		t=head;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=n;
	}
}
void display(){
	struct Node *t;
	
		if(head==NULL){
	printf("List is empty");
	}
	else{
		t=head;
		while(t!=NULL){
			printf("%d ",t->data);
			t=t->next;
		}
	}
}
void insertFront(){
struct Node *n,*t;
	n=(struct Node*)malloc(sizeof(struct Node*));
	printf("enter the Data: ");
	scanf("%d",&n->data);
	n->next=NULL;
	if(head==NULL){
		head=n;
	}
	else{
		n->next=head;
		head=n;
	}
}
void main(){
	int ch,data;
	do{
		printf("\n1.insert Node\n2.Display\n3.Insert Front\n4.Exit");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				insertFront();
				break;
			case 4:
				exit(0);	
		}
	}while(1);
}

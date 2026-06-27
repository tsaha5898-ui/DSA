#include<stdio.h>
#define size 3
int stack[size],top=-1;
void push(int data){
	if(top==size-1){
		printf("Stack is full");
	}
	else{
//		top=top+1;
//		stack[top]=data;
	stack[++top]=data;
	}
}
void pop(){
	if(top==-1){
		printf("Stack empty");
	}
	else{
		printf("%d is poped element",stack[top--]);
	}
}
void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("%d ",stack[i]);
	}
}
void main(){
	int ch,data;
	do{
	printf("\n1.Push\n2.Pop\n3.Display\n4.exit\n");
	printf("enter the choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("Enter the data: ");
			scanf("%d",&data);
			push(data);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
	}
	
	
}while(1);
	
}

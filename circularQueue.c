#include<stdio.h>
#define size 5
int queue[size],front=-1,rear=-1;
void enqueue(int data){
	if((rear+1)%size==front){
		printf("queue is full");
	}
	else if(front==-1&&rear==-1){
		rear=front=0;
		queue[rear]=data;
	}
	else{
		rear=(rear+1)%size;
		queue[rear]=data;
	}
}
void dequeue(){
	if(front==-1&&rear==-1){
		printf("queue is empty");
		
	}
	else if(front==rear){
		front=rear=-1;
		
	}
	else{
		printf("%d is deleted element",queue[front]);
		front=(front+1)%size;
	}
}
void disp()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		while(i!=rear)
		{
			printf(" %d ",queue[i]);
			i=(i+1)%size;
		}
		printf("%d",queue[rear]);
	}
}

void main(){
	int ch,data;
	do{
	printf("\n1.rear\n2.front.\n3.display\n4.exit\n");
	printf("enter the choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("enter the data: ");
			scanf("%d",&data);
			enqueue(data);
			break;
		case 2:
			dequeue();
			break;
		case 3:
		    disp();
			break;
		case 4:
			exit(0);			
		}
	}
	while(1);
}


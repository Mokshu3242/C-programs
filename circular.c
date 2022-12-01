#include<stdio.h>
#include<conio.h>
int front=-1,rear=-1;
#define max 5
int queue[max];
int n,item;
//void enqueue(void);
//void dequeue(void);
//void display(void);

void main(){
	int choice;
	
	while(choice!=4){
		printf("\n!!!! Menu !!!! \n");
		printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
		printf("\nEnter Your Choice: ");
		scanf("%d",&choice);
			switch(choice){
			case 1: 
					enqueue();
			break;
			case 2: dequeue();
			break;
			case 3: display();
			break;
			case 4: printf("\nThankyou\n");
			break;
			default: printf("\nEnter correct choice between 1-4:\n");
			break;
		}
	}
	getch();
}

void enqueue(){
	printf("\nEnter elements to insert in queue: ");
	scanf("%d",&item);
	if(front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
		queue[rear] = item ;
	}
	else if((rear+1)%max==front)
	{
		printf("\nQueue Overflow\n");
	}
	else{
		rear= rear+1;
		queue[rear]=item;
	}
}

void dequeue()
{
	if(front == -1 && rear == -1)
	{
		printf("\nQueue Underflow\n");
	}
	else if(front == rear)
	{
		printf("Element deleted from queue is : %d\n",queue[front]);
		front = -1;
		rear=-1;
	}
	else
	{
		printf("Element deleted from queue is : %d\n",queue[front]);
		front = front+1;
	}
}

void display(){
	int i = front;
	
	if(front == -1 && rear == -1)
	{
		printf("\nQueue Empty\n");
	}
	else
	{
		printf("Element in queue are :\n");
		while(i<=rear){
			printf("%d\n",queue[i]);
			i= i+1;
		}
	}
	
}
